#include "pitches.h"

#define SHORT_DELAY 200

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int redLed1 = 2;
int redLed2 = 3;
int yellowLed1 = 4;
int greenLed1 = 5;
int greenLed2 = 6;
int mySwitch = 7;
int speaker = 8;

int loopCount = 0;

void l2r(int delayTime){
  digitalWrite(redLed1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);
  digitalWrite(redLed2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(redLed1, LOW);    // turn the LED off by making the voltage LOW
  delay(delayTime);
  digitalWrite(yellowLed1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(redLed2, LOW);    // turn the LED off by making the voltage LOW
  delay(delayTime);
  digitalWrite(greenLed1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(yellowLed1, LOW);    // turn the LED off by making the voltage LOW
  delay(delayTime);
  digitalWrite(greenLed2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(greenLed1, LOW);    // turn the LED off by making the voltage LOW
  delay(delayTime);
  digitalWrite(greenLed2, LOW);   // turn the LED on (HIGH is the voltage level)  
}

void r2l(int delayTime){
  digitalWrite(greenLed2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);
  digitalWrite(greenLed1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(greenLed2, LOW);    // turn the LED off by making the voltage LOW
  delay(delayTime);
  digitalWrite(yellowLed1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(greenLed1, LOW);    // turn the LED off by making the voltage LOW
  delay(delayTime);
  digitalWrite(redLed2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(yellowLed1, LOW);    // turn the LED off by making the voltage LOW
  delay(delayTime);
  digitalWrite(redLed1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(redLed2, LOW);    // turn the LED off by making the voltage LOW
  delay(delayTime);  
  digitalWrite(redLed1, LOW);   // turn the LED on (HIGH is the voltage level)
}

void centerOutward(int delayTime){
  digitalWrite(yellowLed1, HIGH);
  delay(delayTime);
  digitalWrite(redLed2, HIGH);
  digitalWrite(greenLed1, HIGH);
  digitalWrite(yellowLed1, LOW);
  delay(delayTime);
  digitalWrite(redLed1, HIGH);
  digitalWrite(greenLed2, HIGH);
  digitalWrite(redLed2, LOW);
  digitalWrite(greenLed1, LOW);
  delay(delayTime);
  digitalWrite(redLed1, LOW);
  digitalWrite(greenLed2, LOW);
}

void allOn(){
  digitalWrite(redLed1, HIGH);
  digitalWrite(redLed2, HIGH);
  digitalWrite(yellowLed1, HIGH);
  digitalWrite(greenLed1, HIGH);
  digitalWrite(greenLed2, HIGH);
}

void allOff(){
  digitalWrite(redLed1, LOW);
  digitalWrite(redLed2, LOW);
  digitalWrite(yellowLed1, LOW);
  digitalWrite(greenLed1, LOW);
  digitalWrite(greenLed2, LOW);
}  
  
void strobeAll(int delayTime){
    allOn();  
    delay(delayTime);  
    allOff();
    delay(delayTime);
 
}

#define QTR_NOTE 250
#define NOTE_DELAY 300
void playMelody(){
  tone(speaker, NOTE_D4, QTR_NOTE);
  delay(NOTE_DELAY);
  tone(speaker, NOTE_D4, QTR_NOTE);
  delay(NOTE_DELAY);
  tone(speaker, NOTE_D4, QTR_NOTE);
  delay(NOTE_DELAY);
  tone(speaker, NOTE_D4, QTR_NOTE/2);
  delay(NOTE_DELAY/2);
  tone(speaker, NOTE_D4, QTR_NOTE/2);
  delay(NOTE_DELAY/2);
  tone(speaker, NOTE_D4, QTR_NOTE);
  delay(NOTE_DELAY);
  tone(speaker, NOTE_A3, QTR_NOTE*2);
  delay(NOTE_DELAY*2);
}

void playBeep(int direction){
  if (direction == 0) {
    tone(speaker, NOTE_C4, QTR_NOTE);
    delay(NOTE_DELAY);
    tone(speaker, NOTE_C5, QTR_NOTE);
    delay(NOTE_DELAY);
    tone(speaker, NOTE_C6, QTR_NOTE);
    delay(NOTE_DELAY);
  }
  else {
    tone(speaker, NOTE_C6, QTR_NOTE);
    delay(NOTE_DELAY);
    tone(speaker, NOTE_C5, QTR_NOTE);
    delay(NOTE_DELAY);
    tone(speaker, NOTE_C4, QTR_NOTE);
    delay(NOTE_DELAY);
  }
}

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(redLed1, OUTPUT);     
  pinMode(redLed2, OUTPUT);     
  pinMode(greenLed1, OUTPUT);     
  pinMode(greenLed2, OUTPUT);  
  pinMode(yellowLed1, OUTPUT); 
  pinMode(mySwitch, INPUT_PULLUP);
  pinMode(speaker, OUTPUT); 
}

// the loop routine runs over and over again forever:
void loop() {
  if (digitalRead(mySwitch) == HIGH) {
    for(int i = 0; i < 3; i++)
      l2r(SHORT_DELAY);
  }
  else {
    for (int i = 0; i < 3; i++)
      r2l(SHORT_DELAY);
  }
  
  for (int i = 0; i < 5; i++)
    centerOutward(SHORT_DELAY);

  for  (int i = 0; i < 7; i++) {
    strobeAll(100);
  }
  
  delay(500);
  
  if (digitalRead(mySwitch) == HIGH)
    playMelody();
  else
    playBeep(loopCount++ % 2);
}
