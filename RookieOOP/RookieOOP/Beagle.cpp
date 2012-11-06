/* Beagle Implementation */
 
#include <iostream>
#include "Beagle.h"
#include "Dog.h"
#include "Animal.h"

Beagle::Beagle(string name) : Dog(name) {}


//Beagles override Animal's make noise method. Other Animals don't necessarily do this because the method is virtual not abstract. 
void Beagle::makeNoise(){
    for(int i = 0; i < 3; i++){
        Animal::makeNoise();
    }
}
string Beagle::getBreed(){
    return "Beagle";
}