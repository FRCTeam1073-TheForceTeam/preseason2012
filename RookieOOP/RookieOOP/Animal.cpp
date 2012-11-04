//
//  Animal.cpp
//  RookieOOP
//
//  Created by Irfan Ugur on 11/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Animal.h"
#include <string>
using namespace std;
Animal::Animal(string name){
    this->name = name;
}
void Animal::makeNoise(){
    std:cout << getNoise();
}
string Animal::getBreed(){  //not all animals have Breeds, if yours does, override this...
    return "N/A";
}
string Animal::getName(){
    return this->name;
}
