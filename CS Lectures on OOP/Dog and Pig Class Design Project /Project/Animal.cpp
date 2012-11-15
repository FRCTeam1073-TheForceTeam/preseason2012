//Animal.cpp - Implementation of the Animal class.

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