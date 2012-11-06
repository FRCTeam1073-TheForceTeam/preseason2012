//
//  Fish.h
//  RookieOOP
//
//  Created by Irfan Ugur on 11/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef RookieOOP_Fish_h
#define RookieOOP_Fish_h
#include "Animal.h"
#include <string>
class Fish: public Animal{
protected:
    string getNoise(); 
public:
    Fish(string name);
    int getLegNumber();
    string getSpecies();
};

#endif
