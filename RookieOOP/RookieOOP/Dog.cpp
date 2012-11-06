#include "Dog.h"
#include "Quadrupedal.h"
string Dog::getNoise(){
    return "Woof!";
}
string Dog::getSpecies(){
    return "Dog";
}
Dog::Dog(string name) : Quadrupedal(name){}