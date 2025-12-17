## Power Architecture

### Power Sources
- Two 18650 Li-ion batteries are used to power the ESP32 and logic circuitry.
- Eight 1.5 V AA batteries are used to power the L298N motor driver and DC motors.

### Voltage Regulation
- A YwRobot MB102 breadboard power supply module is used to regulate and distribute voltage for the ESP32 and peripheral components.

### Grounding
- The grounds (negative terminals) of the ESP32, L298N motor driver, 18650 battery pack, and AA battery pack are connected together to form a common ground.

### Design Rationale
- DC motors draw high current and introduce electrical noise.
- Using a separate power supply for motors prevents voltage drops that could reset the ESP32.
- A common ground ensures that control signals from the ESP32 are correctly interpreted by the L298N motor driver.
