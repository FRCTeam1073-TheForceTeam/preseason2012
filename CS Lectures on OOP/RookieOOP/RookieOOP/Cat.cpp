/*  Implementation of the Cat class */

#include <iostream>
#include <string>
#include "Cat.h"
#include "Quadrupedal.h"

//implementations of inherited abstract methods

Cat::Cat(string name) : Quadrupedal(name) {}
string Cat::getNoise(){
    return "Meow!";
}
string Cat::getSpecies(){
    return "Cat";
}

//methods unique to the Cat class

void Cat::eatAFish(Fish* dinner){
    cout << (getName() + " is eating " + dinner->getName() + "!\n");
    cout << ("\t" + getName() + " sure is a fat " + getSpecies() + "...\n");
}