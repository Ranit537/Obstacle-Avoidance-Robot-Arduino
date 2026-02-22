# 🤖 Obstacle Avoidance Robot (Arduino)

An autonomous **Arduino-based obstacle avoidance robot** that detects obstacles using an ultrasonic sensor and intelligently navigates around them using a servo-mounted sensor system.

---

## 🚀 Features

* 📡 Ultrasonic obstacle detection
* 🔄 Automatic direction decision
* 🧠 Smart navigation logic
* ⚙️ Servo scanning system
* 🔋 Battery powered
* 🛞 Differential drive movement

---

## 📸 Robot Preview

![WhatsApp Image 2026-02-23 at 12 24 19 AM](https://github.com/user-attachments/assets/aeb78c6a-781d-42d6-b2b8-bd2e667bcc1e)


---

## 📦 Components Required

* Arduino Uno / Nano
* HC-SR04 Ultrasonic Sensor
* L298D Motor Driver
* Servo Motor (SG90)
* 4 × BO Motors
* Robot Chassis
* 2 × 18650 Li-ion Batteries
* Battery Holder + Switch
* Jumper Wires

---

## 🔌 Wiring Connections

### Ultrasonic Sensor → Arduino

| Sensor | Arduino |
| ------ | ------- |
| VCC    | 5V      |
| GND    | GND     |
| TRIG   | D9      |
| ECHO   | D10     |

---

### Servo → Arduino

| Wire          | Pin |
| ------------- | --- |
| Red           | 5V  |
| Brown/Black   | GND |
| Yellow/Orange | D3  |

---

### L298D Motor Driver → Arduino

| Driver | Arduino |
| ------ | ------- |
| IN1    | D4      |
| IN2    | D5      |
| IN3    | D6      |
| IN4    | D7      |
| ENA    | D11     |
| ENB    | D12     |

---

### Motors → Driver

* Left motors → OUT1 + OUT2
* Right motors → OUT3 + OUT4

---

### Power

* Battery **+** → Driver **12V**
* Battery **–** → Driver **GND**
* Driver **5V** → Arduino **5V**
* Driver **GND** → Arduino **GND**

⚠️ Batteries must be **in series (7.4V)**

---

## ▶️ How to Upload Code

1. Open Arduino IDE
2. Open sketch file
3. Select board + COM port
4. Click **Upload**

---

## 🧠 Working Principle

Robot behavior logic:

1. Move forward
2. Scan surroundings using servo
3. Measure left + right distances
4. Compare values
5. Turn toward safer side
6. Continue forward

---

## ⚙️ Algorithm Flow

```
Start
 ↓
Measure front distance
 ↓
Obstacle?
 ├─ No → Move Forward
 └─ Yes → Scan Left & Right
              ↓
       Choose Longer Distance
              ↓
           Turn Robot
              ↓
           Continue
```

---

## 🛠 Troubleshooting

**Motors not moving**

* Check battery voltage
* Verify motor driver wiring

**Sensor not detecting**

* Confirm TRIG/ECHO pins
* Ensure no loose wires

**Servo not rotating**

* Use external power if needed

---

## 🔋 Battery Safety

* Use protected cells
* Never short circuit
* Use proper charger module
* Do not over-discharge batteries

---

## 📁 Project Structure

```
Obstacle-Avoidance-Robot-Arduino/
│
├── sketch.ino
├── README.md
└── robot.jpg
```

---

## 📜 License

Open source — free to use and modify.

---

## 👨‍💻 Author

**Ranit537**
GitHub: https://github.com/Ranit537

---

⭐ Star this repo if you like the project!
