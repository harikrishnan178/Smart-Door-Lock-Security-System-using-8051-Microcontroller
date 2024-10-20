# Smart Door Lock Security System using 8051 Microcontroller
# Overview
This project demonstrates a Smart Door Lock Security System that operates using a PIN-based authentication mechanism. The system is built around the 8051 microcontroller and simulated in Proteus software. The user must enter a correct PIN to unlock the door, providing a secure and efficient locking mechanism for homes, offices, or any restricted area.

# Features
PIN-based security: Only authorized users with the correct PIN can unlock the door.
Keypad input: User-friendly interface for PIN entry.
LCD display: Displays messages like "Enter PIN" and "Access Granted/Denied."
Buzzer: Alerts for wrong PIN entries.
Proteus simulation: Full simulation of the system for testing.
# Components
8051 Microcontroller
4x4 Keypad for PIN entry
16x2 LCD Display for status messages
Buzzer for incorrect PIN alerts
Servo Motor for door locking and unlocking mechanism
Proteus software for simulation
# Circuit Diagram
The complete circuit diagram has been designed in Proteus and can be viewed in the .dsn file in the repository.
![PDS_T3Qh7euT1y](https://github.com/user-attachments/assets/f1663d26-4bf1-43c7-9456-a4e221e57235)

# Working
The user is prompted to enter a 4-digit PIN using the keypad.
The system compares the entered PIN with the predefined one.
If the PIN is correct, the door unlocks, and the servo motor is activated.
If the PIN is incorrect, the buzzer sounds an alert, and the system resets after a short delay.
The LCD provides feedback, displaying messages like "Enter PIN", "Access Granted", or "Access Denied."
# How to Run the Simulation
Download and install Proteus software.
Open the .dsn file provided in the repository.
Compile the C code using any 8051-compatible compiler (e.g., Keil uVision).
Load the compiled hex file into the 8051 microcontroller in the Proteus simulation.
Run the simulation and test the system by entering different PIN codes.
# How to Use
Clone or download this repository.
Open the Proteus simulation file (.dsn) in the Proteus software.
Start the simulation.
Use the keypad in the simulation to enter the PIN.
Observe the results on the LCD display and buzzer feedback.

# Future Enhancements
Add a GSM module for remote alerts when an incorrect PIN is entered multiple times.
Integrate fingerprint scanning for enhanced security.
