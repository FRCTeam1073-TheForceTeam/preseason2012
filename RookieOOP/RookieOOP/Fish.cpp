//
//  Fish.cpp
//  RookieOOP
//
//  Created by Irfan Ugur on 11/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

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
