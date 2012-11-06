//
//  Beagle.cpp
//  RookieOOP
//
//  Created by Irfan Ugur on 11/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Beagle.h"
#include "Dog.h"
#include "Animal.h"

Beagle::Beagle(string name) : Dog(name) {}
void Beagle::makeNoise(){
    //beagles are hyper dogs so they do make their noise three times!
    for(int i = 0; i < 3; i++){
        Animal::makeNoise();
    }
}
string Beagle::getBreed(){
    return "Beagle";
}