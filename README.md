# 🚀 HDD/SSD Switch Controller with ESP32

## 🎯 Project Overview
This project is an advanced HDD switch controller designed to seamlessly toggle between multiple hard drives (SSDs/HDDs) connected to a PC. It leverages the ESP32 microcontroller to manage power, data connections, and cooling, providing a versatile solution for multi-boot setups.

## 🛠️ Key Features
- **Multi-Drive Switching:** Supports two or more HDDs/SSDs with quick, reliable switching.
- **ESP32 Control:** Manages GPIOs for power and data line control.
- **Reset Trigger Integration:** Automatically resets the PC after switching drives.
- **Temperature Sensor:** Uses the DS18B20 sensor for real-time temperature monitoring.
- **Fan Control:** Adjusts fan speed based on temperature readings to prevent overheating.
- **Power Regulation:** Built-in LM2576 DC-DC step-down module ensures stable power delivery.
- **Voltage Spike Protection:** Includes a TVS diode to safeguard sensitive electronics.

---

## 🔧 Components Used
- **ESP32 Microcontroller** - Brain of the system
- **NMOS Transistors** - Power switching
- **SN74LVC1G19DC** - Logic control for data line switching
- **DS18B20 Temperature Sensor** - Real-time temperature monitoring
- **LM2576 DC-DC Converter** - Stable power regulation
- **SATA Connectors** - Interface with HDD/SSD
- **LEDs** - Status indicators
- **TVS Diode** - Protection from voltage surges

---

## 🖥️ How It Works
1. **Power Control:** The ESP32 controls NMOS transistors to toggle power to the selected drive.
2. **Data Line Switching:** The SN74LVC1G19DC chip ensures only one drive remains active.
3. **Reset Pulse:** A low pulse is sent to the PC’s reset pin, forcing a reboot to recognize the newly selected drive.
4. **Temperature Monitoring:** DS18B20 reads temperatures, and the fan adjusts speed accordingly.
5. **Voltage Protection:** TVS diode shields the system from sudden voltage spikes.

---

## 🚀 Planned Future Improvements
- **Web Control Panel:** Control drive switching from a smartphone or computer.
- **OLED Display:** Display real-time drive status and temperatures.
- **Automatic Drive Detection:** Smarter detection and initialization of connected drives.
- **Power Efficiency Mode:** Reduce power consumption when idle.
- **Error Handling:** Advanced diagnostics and error reporting.

---

## 🛠️ Setup Instructions
1. **Clone this repo to your local machine:**
   ```bash
   git clone https://github.com/yourusername/hdd-switch-controller.git
   ```
2. **Flash the ESP32 with the provided code:**
   ```bash
   esptool.py --port /dev/ttyUSB0 write_flash 0x1000 firmware.bin
   ```
3. **Wire the components according to the schematic provided.**
4. **Power on, and start switching drives effortlessly!**

---

## 📚 What I’ve Learned
This project helped me master:
- ESP32 microcontroller programming and GPIO control
- MOSFET transistors for power switching
- SATA data line manipulation
- Temperature monitoring and fan control
- Power regulation and circuit protection

---

## 🔥 Project Status
✅ **Current Progress:** The project is **85% complete** — core functionalities are operational, but features like web control, dynamic drive detection, and OLED display integration are still in progress.

---

## 🎯 My Goal with This Project
I’m building this project as a showcase of my advanced electronics and programming skills. It’s part of my portfolio to demonstrate expertise in microcontroller systems and embedded design — aiming to strengthen my application for **engineering scholarships** and **embedded systems programs**.

If you’re a recruiter or a professor looking for passionate, hands-on problem solvers — this is what I can do! 💪

---

✨ **Stay tuned for updates and enhancements as I push this project to 100%!**

