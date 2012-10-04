#include "pitches.h"
#define SHORT_DELAY 100
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;

int speaker = 8;

int note = 31;
int lowestpitch = 20;
int highestpitch = 6000;

int finished = 0;

int delayT = 100;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(speaker, OUTPUT);
}

void loop() {
    tone(speaker, note, 2000);
    digitalWrite(led1, HIGH);
    delay(delayT);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    digitalWrite(led4, LOW);
    digitalWrite(led5, HIGH);
    digitalWrite(led5, LOW);
    //tone(speaker, 0, 2000);
    //tone(led, note/100, 2000);
   // digitalWrite(led, HIGH);
    
    if (note<highestpitch && !finished){
      note = note+1;
    }
    if(note>lowestpitch && finished){
      note = note-1;  
    }
    if(note >= highestpitch){
      finished=1;
      //digitalWrite(led, HIGH);
    }
    if(note == 31){
      finished = 0;
      //digitalWrite(led, LOW);
    }
 }
