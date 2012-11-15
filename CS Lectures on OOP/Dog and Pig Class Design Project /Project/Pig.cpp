//
//  Pig.cpp
//  Project
//
//  Created by Irfan Ugur on 11/14/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

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


