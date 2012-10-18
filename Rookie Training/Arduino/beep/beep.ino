#include "pitches.h"
#define SHORT_DELAY 100
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;

int speaker = 8;
int witchlight = 0;



int note = 31;
int lowestpitch = 4000;
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
    delay(delayT);
    if (witchlight==0) 
         digitalWrite(led1, HIGH);
    if (witchlight==1)
        digitalWrite(led1, LOW);
    if (witchlight==2)
        digitalWrite(led2, HIGH);
    if (witchlight==3)
        digitalWrite(led2, LOW);
    if (witchlight==4)
        digitalWrite(led3, HIGH);
    if (witchlight==5)
        digitalWrite(led3, LOW);
    if (witchlight==6)
        digitalWrite(led4, HIGH);
    if (witchlight==7)
        digitalWrite(led4, LOW);
    if (witchlight==8)
        digitalWrite(led5, HIGH);
    if (witchlight==9)
        digitalWrite(led5, LOW);
    //tone(speaker, 0, 2000);
    //tone(led, note/100, 2000);
   // digitalWrite(led, HIGH);
      witchlight = (witchlight   +  random(0,10)   )%10;
    
    if (note<random(6000) && !finished){
      note = note+random(100,300);
    }
    if(note>random(1000) && finished){
      note = note-random(100,300);  
    }
    if(note >= highestpitch){
      finished=1;
      //digitalWrite(led, HIGH);
    }
    if(note <= lowestpitch){
      finished = 0;
      //digitalWrite(led, LOW);
    }
 }
