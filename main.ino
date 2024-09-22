// SoftPot Piano
// Vishnu Ajay
// 8/28/2023
// Rev A
// Frequency scale roughly measured from https://www.kamimusic.com/notes-octaves-scale/

#include "pitches.h"

const int softPotPin = A0;     // SoftPot analog pin
const int speakerPin = 8;      // Speaker digital pin
const int touchThreshold = 1010; // Max threshold

// Frequencies for Sa, Re, Ga, Ma, Pa, Dha, NI, Sa in 3rd and 4th Octaves
const int notes[] = {
  NOTE_A3, NOTE_B3, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4
};

void setup() {
  pinMode(speakerPin, OUTPUT);
  Serial.begin(9600);
}

// Function called playTone
void playTone(int note, int duration) {
  tone(speakerPin, note, duration);
  delay(duration);
  noTone(speakerPin);
}

void loop() {
  int softPotValue = analogRead(softPotPin);
  
  // Condition for threshold
  if (softPotValue < touchThreshold) {
    int noteIndex = map(softPotValue, 0, touchThreshold, 0, 7);  // Map softpot to notes
    
    int noteDuration = 200;  // Duration for each note
    playTone(notes[noteIndex], noteDuration);

    Serial.print("Playing Note in Frequency: ");
    Serial.println(notes[noteIndex]);

    float voltage = (softPotValue / 1023.0) * 5.0;
    Serial.print("SoftPot Resistance: ");
    Serial.print(softPotValue);
    Serial.print("\tVoltage: ");
    Serial.println(voltage);
  } else {
    noTone(speakerPin);
  }

  delay(100);
}

