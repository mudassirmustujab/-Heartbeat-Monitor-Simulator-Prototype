# -Heartbeat-Monitor-Simulator-Prototype
A low-cost heartbeat simulation using Arduino, built to explore early-stage patient vitals monitoring systems.

# Simulated Heartbeat Monitor — Arduino Project

This project simulates a patient's heart rate using basic electronic components and an Arduino Uno. A potentiometer is used to mimic the variability in human pulse, while LEDs represent heartbeat feedback and emergency alerts.

---

## 🔧 Components Used
- Arduino Uno
- Potentiometer
- 2x LEDs (Heartbeat + Alert)
- Resistors
- Jumper wires
- Breadboard

---

## 🧠 Concept

This prototype explores how minimal hardware can be used to simulate a vital signs monitor. The LED blinks in sync with the simulated BPM (beats per minute), and an alert is triggered if the BPM crosses a critical threshold (120 BPM).

This type of system could be a first step in building affordable, low-resource monitoring tools for use in remote or underserved medical environments.

---

## 💻 Features

- Real-time BPM simulation (mapped from analog input)
- LED-based heartbeat indication
- Emergency alert LED for BPM > 120
- Simple, scalable logic for future sensor upgrades (e.g., IR pulse sensors)

---

## ⚙️ Code Summary

- `analogRead()` reads from potentiometer
- `map()` function converts analog value to BPM range (60–180)
- `if` condition checks threshold and triggers alert
- LEDs blink based on simulated pulse rate

---

## 🧠 Why This Matters

> *"Making life-saving tech with life-draining components."*

This project is part of a larger personal mission to build low-cost medical technology — even without access to advanced labs or funding. It's a proof-of-concept that you don't need much to start building for impact.

---

## 📍 Location
Built in Karachi, Pakistan  
By a self-taught student applying for robotics & med-tech scholarships

---

## 🔗 License
MIT — free to use, improve, or build upon
