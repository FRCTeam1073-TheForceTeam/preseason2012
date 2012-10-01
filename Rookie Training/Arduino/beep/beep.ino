#include "pitches.h"

int led = 3;

int speaker = 8;

int note = 31;

int finished = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(speaker, OUTPUT);
}

void loop() {
    tone(speaker, note, 500);
    tone(led, note/100, 2000);
   // digitalWrite(led, HIGH);
    
    if (note<4978 && !finished){
      note = note+1;
    }
    if(note>31 && finished){
      note = note-1;  
    }
    if(note == 4978){
      finished=1;
      //digitalWrite(led, HIGH);
    }
    if(note == 31){
      finished = 0;
      //digitalWrite(led, LOW);
    }
 }
