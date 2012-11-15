//
//  Dog.cpp
//  Project
//
//  Created by Irfan Ugur on 11/14/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Dog.h"

Dog::Dog(string entername, int enterage, bool entergender, string enterbreed) 
:Animal(entername, enterage, entergender){
    breed = enterbreed;
}


string Dog:: getBreed(){
    return breed;
}

void Dog::chaseTail(){
    cout << (getName() + " is chasing its tail\n");
}

int Dog::getAgeindogyears(){
    return age *7;
}