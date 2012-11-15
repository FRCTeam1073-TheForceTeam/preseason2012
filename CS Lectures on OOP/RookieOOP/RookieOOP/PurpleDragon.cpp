//
//  PurpleDragon.cpp
//  RookieOOP
//
//  Created by Irfan Ugur on 11/7/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "PurpleDragon.h"
#include "Animal.h"
using namespace std;    //don't do this
PurpleDragon::PurpleDragon(string name) : Animal(name) {}

int PurpleDragon::getLegNumber(){
    return 6;
}

string PurpleDragon::getSpecies(){
    return "Purple Dragon";
}

void PurpleDragon::breathePurpleFire(Animal* target){
    if(target == NULL){
        cout << (getName() + " didn't kill anything because his target was an animal that doesn't exist\n");
    }
    else{
        cout << (getName() + " is burning " + target->getName() + " alive!\n");
    }
}

string PurpleDragon::getNoise(){
    return "Blablablablabla roar";
}