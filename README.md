# 🌱 Smart Agriculture Monitoring System (IoT Simulation)

An IoT-based smart agriculture and irrigation monitoring system simulated using **Arduino UNO** in **Tinkercad**.  
The project demonstrates automated irrigation, environmental monitoring, and field security using sensor-based decision logic.

---

## 🚀 Project Overview

This project simulates a **Smart Agriculture System** that monitors soil moisture and temperature in real time and automatically controls irrigation.  
It also detects motion in the field and triggers an audible alarm for security purposes.

Due to simulation limitations, real IoT hardware such as ESP32 and water pump are logically represented using Arduino-compatible components while preserving real-world system behavior.

---

## 🎯 Features

- 💧 Automatic irrigation based on soil moisture  
- 🌡️ Real-time temperature monitoring  
- 🚨 Motion detection with buzzer alarm  
- 📟 Live data display on 16×2 I2C LCD  
- 🔁 Continuous real-time operation  
- 🧪 Safe and stable simulation in Tinkercad  

---

## 🧠 System Architecture

[Soil Moisture Sensor] ─┐
├──> Arduino UNO ──> LED (Pump)
[Temperature Sensor] ───┤
├──> I2C LCD Display
[Motion Sensor] ────────┤
└──> Buzzer (Alarm)


---

## 🔧 Components Used

### Hardware (Simulated)
- Arduino UNO  
- 16×2 I2C LCD Display (PCF8574, Address: 0x27)  
- Potentiometer (Soil Moisture Simulation)  
- TMP36 Temperature Sensor  
- Push Button (PIR Motion Simulation)  
- LED (Water Pump Simulation)  
- Active Buzzer (Alarm)  
- Resistors and Jumper Wires  

### Software
- Arduino IDE  
- Tinkercad Circuits  
- GitHub  

---

## 🔌 Pin Configuration

| Component | Arduino Pin |
|---------|-------------|
| Soil Moisture (Potentiometer) | A0 |
| Temperature Sensor (TMP36) | A1 |
| Motion Sensor (Push Button) | D2 |
| Pump Indicator (LED) | D8 |
| Alarm (Buzzer) | D9 |
| I2C LCD SDA | A4 |
| I2C LCD SCL | A5 |

---

## ⚙️ Working Logic

1. Soil moisture is continuously monitored  
2. If moisture falls below the threshold:
   - Pump (LED) turns ON automatically  
3. Temperature is monitored in real time  
4. If motion is detected:
   - Buzzer alarm is activated  
5. All sensor values and system status are displayed on the I2C LCD  

---

## 🖥️ Simulation Details

- Platform: **Tinkercad Circuits**
- Controller: **Arduino UNO**
- ESP32 behavior is logically simulated
- Water pump is represented using an LED to avoid high-current issues in simulation

---

## 🧪 How to Run the Project

1. Open the Arduino `.ino` file in Tinkercad or Arduino IDE  
2. Start the simulation  
3. Rotate the potentiometer to simulate soil moisture levels  
4. Press the push button to simulate motion detection  
5. Observe LCD updates, pump status (LED), and buzzer alarm  

---

## 🔮 Future Enhancements

- Replace Arduino UNO with ESP32  
- Add cloud monitoring (Blynk / Firebase)  
- Implement SMS or mobile app alerts  
- Integrate real sensors and water pump  
- Solar-powered irrigation system  

---

## 🎓 Academic Relevance

This project was developed as part of the **IoT Architecture & Design Lab** and demonstrates:
- IoT-based sensing and automation  
- Embedded system design  
- Smart agriculture concepts  

---

## 🙌 Author

**Vikash Kumar Singh**  
B.Tech (CSE – Internet of Things)  
Bakhtiyarpur College of Engineering, Patna  

🔗 LinkedIn: https://www.linkedin.com/in/vikash-kumar-singh-1ab36024b/
