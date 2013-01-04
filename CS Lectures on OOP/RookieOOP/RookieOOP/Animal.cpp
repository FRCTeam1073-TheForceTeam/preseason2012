/*Animal.cpp
    Implementation of the abstract Animal classes. It has a few methods that are implemented... */


#include <iostream>
#include "Animal.h"
#include <string>

/*  Constructor for the animal class. Every subclass of Animal will eventually call this constructor, it takes a string and stores it in the variable name. This String is used later on when getName() is called.  */

Animal::Animal(string name){    
    this->name = name;
}

/*  makeNoise() Method. This method prints the animals noise on the screen. It uses the method getNoise() which is undefined subclasses of animal need to implement this method, then, when makeNoise() is called, the program will know what to print
 */

void Animal::makeNoise(){
    cout << getNoise();
}

/*  This is a virtual string meaning you can override it in subclasses of animal if you want, but you don't have to unlike an abstract method.  */
string Animal::getBreed(){
    return "N/A";
}

/*  Returns the name of the animal  */
string Animal::getName(){
    return this->name;
}
