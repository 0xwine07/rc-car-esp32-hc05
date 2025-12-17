# ESP32 Bluetooth RC Car

A Bluetooth-controlled RC car developed using an ESP32 microcontroller and L298N motor driver.  
The project demonstrates embedded motor control, Bluetooth communication, and a dual power supply design through a functional hardware prototype.

---

## Features
- Bluetooth-based wireless control using ESP32 Classic Bluetooth
- Forward, backward, left, and right motion control
- Front white LED and rear red LED indicators
- Buzzer for audio feedback
- Dual power supply design for logic and motors
- Smartphone-based Bluetooth control

---

## Hardware Overview
The RC car is built using an ESP32 and L298N motor driver mounted on a 4-wheel chassis.  
A dual power supply is used to isolate motor current from logic circuitry for stable operation.

Detailed hardware documentation:
- `hardware/Components_List.md`
- `hardware/Power_Architecture.md`

---

## Software
- Developed using Arduino IDE
- Uses ESP32 `BluetoothSerial` (Classic Bluetooth)
- Command-based control logic

Firmware source:
- `firmware/esp32_bluetooth_rc_car.ino`

---

## Control Commands

| Command | Function |
|------|---------|
| F | Move Forward |
| B | Move Backward |
| L | Turn Left |
| R | Turn Right |
| S | Stop |
| X / Y | Front LED ON / OFF |
| N / n | Rear LED ON / OFF |
| M / m | Buzzer ON / OFF |

---

## Circuit Diagram
![Circuit Diagram](images/circuit_diagram.png)

---

## Demo
A working demonstration of the RC car is available under the **Issues** section of this repository.

---

## Design Notes
- Bluetooth communication is implemented using the ESP32’s built-in Classic Bluetooth module; no external HC-05 module is used.
- The project was developed as a functional prototype, with focus on validating control logic and power stability.

---

## Future Work
Planned improvements and enhancements are tracked using **GitHub Issues**.

---

## License
MIT License
