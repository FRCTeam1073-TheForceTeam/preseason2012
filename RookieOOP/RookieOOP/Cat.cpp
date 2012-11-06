//
//  Cat.cpp
//  RookieOOP
//
//  Created by Irfan Ugur on 11/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <string>
#include "Cat.h"
#include "Quadrupedal.h"
Cat::Cat(string name) : Quadrupedal(name) {}
string Cat::getNoise(){
    return "Meow!";
}
string Cat::getSpecies(){
    return "Cat";
}
