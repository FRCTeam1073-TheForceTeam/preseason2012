/*  Implementation of the Dog class */

#include "Dog.h"
#include "Quadrupedal.h"

Dog::Dog(string name) : Quadrupedal(name) {}

string Dog::getNoise(){
    return "Woof!";
}
string Dog::getSpecies(){
    return "Dog";
}

/* This is a method that only dogs have. Dogs still have all the methods and traits of a Quadrupedal, but they also can have thier own unique methods that only Dogs and their subclasses have, such as this one. */

void Dog::chaseCat(Cat* target){
    cout << (getName() + " is chasing the Cat " + target->getName() + "!\n");
}

