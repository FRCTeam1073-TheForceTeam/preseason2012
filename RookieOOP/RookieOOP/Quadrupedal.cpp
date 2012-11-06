//
//  Quadrupedal.cpp
//  RookieOOP
//
//  Created by Irfan Ugur on 11/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Animal.h"
#include "Quadrupedal.h"
#include <string>
int Quadrupedal::getLegNumber(){
    return 4;
}
Quadrupedal::Quadrupedal(string name) : Animal(name) {}