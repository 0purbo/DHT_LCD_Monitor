# 🌡️ DHT_LCD_Monitor

A beginner-friendly Arduino project that reads **temperature** and **humidity** data from a **DHT11 sensor** and displays it on a **16x2 I2C LCD** screen. Great for learning how to use sensors, I2C displays, and the basics of serial communication with Arduino! 💡

---

## 🛠️ What You’ll Learn

- How to connect and use a **DHT11 temperature & humidity sensor**
- How to connect and control an **I2C LCD (16x2)**
- Basics of reading sensor data and displaying it on hardware and Serial Monitor
- How to structure an Arduino project

---

## 🧰 Components Required

| Component             | Quantity |
|----------------------|----------|
| Arduino Uno (or Nano) | 1        |
| DHT11 Sensor          | 1        |
| I2C LCD Display (16x2)| 1        |
| Jumper Wires          | As needed|
| Breadboard (optional) | 1        |

---

## 🔌 Wiring Diagram

| DHT11 Pin | Arduino Pin |
|-----------|-------------|
| VCC       | 5V          |
| GND       | GND         |
| DATA      | D10         |

| LCD Pin (via I2C) | Arduino Pin |
|-------------------|-------------|
| VCC               | 5V          |
| GND               | GND         |
| SDA               | A4 (Uno)    |
| SCL               | A5 (Uno)    |

_Note: For Nano and other boards, SDA and SCL pins may differ._

---

## 🧑‍💻 How to Use

1. **Install Required Libraries**:
    - Go to Arduino IDE ➜ Sketch ➜ Include Library ➜ Manage Libraries...
    - Search and install the following:
      - `DHT sensor library by Adafruit`
      - `LiquidCrystal_I2C by Frank de Brabander`

2. **Upload the Code**:
    - Open `DHT_LCD_Monitor.ino` in Arduino IDE
    - Select the correct board and COM port
    - Upload the code

3. **View Output**:
    - Check the LCD display for temperature and humidity
    - Open Serial Monitor (9600 baud) for debug output

---

## 🖥️ Output Example

**LCD Display:**
Temp: 24.5 °C
Humidity: 45.0 %


**Serial Monitor:**
Temp: 24.5 C, Humidity: 45.0 %




---

## 💡 Tips

- If your LCD doesn't show anything, try changing the I2C address (`0x27` or `0x3F`)
- Make sure your DHT11 sensor isn't faulty by testing with another code
- You can increase the update rate by changing `delay(2000)` to a smaller value

---

## 🧾 License

MIT License

---

## 📸 Project Preview



---

## 💬 Feedback

If you enjoyed this project or found it helpful, consider giving it a ⭐ and sharing it with others!

Happy tinkering! 🤖✨
