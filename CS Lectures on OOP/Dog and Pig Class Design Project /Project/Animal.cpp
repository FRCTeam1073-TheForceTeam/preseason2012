//
//  Animal.cpp
//  Project
//
//  Created by Irfan Ugur on 11/14/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Animal.h"

Animal::Animal(string enteredname, int enteredage, bool enteredgender){
    name=enteredname;
    age=enteredage;
    male=enteredgender;
}

string Animal::getName() {
    return name;
}

int Animal::getAge(){
    return age;
}

bool Animal::isMale(){
    return male;
}

void Animal::getOlder(){
    age = age + 1;
}