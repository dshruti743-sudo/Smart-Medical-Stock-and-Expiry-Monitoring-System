#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

// Pins
int ledPin = 8;
int buzzerPin = 9;
int buttonPin = 10;

// Medicine Data
String medName[] = {
  "Paracetamol", "Dolo650", "Crocin", "Aspirin",
  "Ibuprofen", "Amoxicillin", "Cetirizine",
  "Azithro", "Metformin", "Omeprazole"
};

int quantity[] = {10, 3, 8, 6, 4, 2, 9, 5, 7, 1};

int expiryDays[] = {5, 2, 15, 7, 3, 0, 10, 4, 12, 2};

int totalMed = 10;

void setup() {
  lcd.init();
  lcd.backlight();

  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

  lcd.print("Press Button");
  lcd.setCursor(0, 1);
  lcd.print("To Start");
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    delay(300); // Debounce

    for (int i = 0; i < totalMed; i++) {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(medName[i]);

      lcd.setCursor(0, 1);

      // EXPIRED (expiry = 0)
      if (expiryDays[i] == 0) {
        lcd.print("EXPIRED!");

        digitalWrite(ledPin, HIGH);

        // Continuous buzzer (5 sec)
        digitalWrite(buzzerPin, HIGH);
        delay(5000);
        digitalWrite(buzzerPin, LOW);

        digitalWrite(ledPin, LOW);
      }

      // EXACT 2 DAYS (beep-pause)
      else if (expiryDays[i] == 2) {
        lcd.print("E:2d ALERT");

        digitalWrite(ledPin, quantity[i] < 5);

        // Beep-pause for 5 sec
        for (int j = 0; j < 10; j++) {
          digitalWrite(buzzerPin, HIGH);
          delay(250);

          digitalWrite(buzzerPin, LOW);
          delay(250);
        }
      }

      // ALL OTHER CASES
      else {
        lcd.print("Q:");
        lcd.print(quantity[i]);
        lcd.print(" E:");
        lcd.print(expiryDays[i]);
        lcd.print("d");

        digitalWrite(ledPin, quantity[i] < 5);
      }
    }

    delay(5000);

    lcd.clear();
    lcd.print("Done");
    delay(2000);
  }

  lcd.clear();
  lcd.print("Press Button");
  lcd.setCursor(0, 1);
  lcd.print("To Start");
}
