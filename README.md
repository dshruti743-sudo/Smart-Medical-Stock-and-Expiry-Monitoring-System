# Smart-Medical-Stock-and-Expiry-Monitoring-System
💊 Smart Medical Stock and Expiry Monitoring System

📌 Project Overview

The Smart Medical Stock and Expiry Monitoring System is an Arduino-based embedded system designed to monitor medicine stock levels and expiry dates.

The system uses an Arduino Uno R3 as its main controller. It displays medicine information on a 16×2 LCD and generates visual and audible alerts when medicine stock is low or medicines are expired or approaching expiry.

The project aims to reduce manual effort, minimize human errors, and improve medicine inventory management in small-scale medical stores, clinics, and healthcare facilities.

🎯 Objectives

- Monitor medicine stock levels and expiry information.
- Generate alerts for low-stock medicines.
- Identify expired and near-expiry medicines.
- Display medicine status using an LCD.
- Reduce manual errors in medicine inventory management.
- Develop a simple and cost-effective embedded solution.

🛠️ Hardware Components

- Arduino Uno R3
- 16×2 LCD Display with I2C Module
- LED Indicators
- Active Buzzer Module (5V)
- Push Button Switch
- Resistors (220Ω / 330Ω)
- Breadboard
- Jumper Wires
- USB Cable

💻 Software and Technologies

- Arduino IDE
- Embedded C
- Proteus (optional simulation)

⚙️ Working Principle

1. The Arduino initializes the connected components.
2. An initial message is displayed on the LCD.
3. The user presses the push button to start monitoring.
4. The system checks the predefined medicine information.
5. Medicine names, quantities, and expiry information are processed.
6. If a medicine is expired, an alert is generated using the LED and buzzer.
7. If a medicine is approaching expiry, an alert is displayed.
8. If stock quantity is below the defined threshold, the LED indicates low stock.
9. The LCD displays the medicine status.
10. The process continues for all listed medicines.

✨ Key Features

- Medicine stock monitoring.
- Expiry status checking.
- LCD-based information display.
- Visual alerts through LED indicators.
- Audible alerts through a buzzer.
- Push-button-based user interaction.
- Low-cost standalone embedded system.

🔮 Future Scope

- Integration of RTC for automatic expiry-date tracking.
- Wi-Fi or Bluetooth connectivity for remote monitoring.
- Mobile application for medicine stock notifications.
- Database integration for medicine records.
- Barcode and QR code scanning.
- Machine learning for predicting medicine stock requirements.

👩‍💻 Project Team

- Shruti Desai
- Suraj Dhande
- Suhani Ambekar

Department: Electronics and Telecommunication Engineering

Academic Year: 2025–26

📚 Project Type

Second Year B.Tech Micro Project

Institution: G H Raisoni College of Engineering and Management, Pune

---

This project is an academic prototype. Medicine information is based on predefined sample data and user input; automatic quantity sensing and connected database monitoring are not implemented in the current version.

🎥 Project Demonstration

Watch our project working:

"▶️ Watch Smart Medical Stock and Expiry Monitoring System Demo" (https://drive.google.com/file/d/1Cl_WOPPugBD-Y4UZoKE9dWxcBBVr9Sa9/view?usp=drive_link)

📸 Project Gallery

1. 1.jpeg (Display "press button to start" on LCD)
2. 2.jpeg (Shows medicine name it's quantity and expiry in days on LCD)
3. 3.jpeg (Gives alert as few days are left to expire medicine with different sounds of buzzer for minimum days and led glows )
4. 4.jpeg (same as 3)
5. 5.jpeg (Gives alert as medicine is expired , led glows and buzzer gives high alert)



