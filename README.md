# SoftPot Piano 🎹

**Author**: Vishnu Ajay  
**Date**: 8/28/2023  
**Revision**: A  

---

## 🎶 Project Overview

This project uses a **SoftPot analog sensor** to play piano-like tones via a speaker. The SoftPot measures touch and translates it into notes. The notes are mapped to specific frequencies from **Sa, Re, Ga, Ma, Pa, Dha, NI, Sa** based on the 3rd and 4th octaves.

---

## 🛠 Hardware Components

- **SoftPot sensor** connected to **A0**
- **Speaker** connected to **digital pin 8**
- Arduino board for control

---

## 💻 Code Breakdown

- **SoftPot Input**: The analog value from the SoftPot is read and mapped to a range of frequencies.
- **Note Frequency Mapping**: The SoftPot value is mapped to different musical notes based on a frequency table.
- **Tone Generation**: A tone corresponding to the note is generated using the `tone()` function and played through the speaker.
- **Threshold**: A maximum threshold value is set to ignore high input values and control note playing.
- **Serial Output**: The code prints out the frequency, SoftPot resistance, and voltage for each note played.

---

## 🛠 Setup Instructions

1. **Connect the SoftPot**: Connect the **SoftPot** sensor to **A0** on the Arduino.
2. **Connect the Speaker**: Attach the **speaker** to digital pin **8**.
3. **Upload Code**: Upload the provided code to the Arduino.

---

## 🎵 Usage

Once everything is connected and powered on:
1. As you press the SoftPot sensor, different tones will play.
2. The frequency of the played note, along with the resistance and voltage values, will be displayed on the **Serial Monitor**.

---

## 🚀 Future Enhancements

- Expand the frequency range for additional musical notes.
- Add functionality to adjust note duration based on touch sensitivity.

---

## 💡 Fun Fact

This simple piano project combines analog sensor readings and frequency generation, allowing you to play simple tunes by sliding your finger across the SoftPot sensor!
