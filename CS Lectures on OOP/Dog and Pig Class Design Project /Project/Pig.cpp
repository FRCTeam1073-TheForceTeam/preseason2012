//Pig.cpp - Implementation of Pig.h

#include <iostream>
#include "Pig.h"



Pig::Pig(string entername, int enterage, bool entergender, bool enteredTuskState
         , bool enteredAggressiveness) : Animal(entername, enterage, entergender){

    hasTusks=enteredTuskState;
    isAggressive=enteredAggressiveness;
}

void Pig::becomeBacon(){
    cout << name << " died and is now serving a tasty purpose\n";
}

bool Pig::isAngry(){
    return isAggressive;
}

float Pig::calculateNetWeightInBacon(float volume){
    //input is in cubic meters
    //returns mass in kilograms of bacon
    return volume*608.65f*.15f;
}


