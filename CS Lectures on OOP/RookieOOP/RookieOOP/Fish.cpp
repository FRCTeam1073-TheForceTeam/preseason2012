/* Implementation of Fish */

#include <iostream>
#include "Fish.h"
#include "Animal.h"

int Fish::getLegNumber(){
    return 0;
}
string Fish::getSpecies(){
    return "Fish";
}
string Fish::getNoise(){
    return "Glub glub!";
}
Fish::Fish(string name) : Animal(name) {}
