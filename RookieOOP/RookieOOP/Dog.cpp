#include <iostream>
#include <string>
#include "Dog.h"
string Dog::getNoise(){
    return "Woof!";
}
string Dog::getSpecies(){
    return "Dog";
}
Dog::Dog(string name){
	this->name = name;
}