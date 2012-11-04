//
//  Cat.h
//  RookieOOP
//
//  Created by Irfan Ugur on 11/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef RookieOOP_Cat_h
#define RookieOOP_Cat_h
#include "Quadrupedal.h"
#include <string>
class Cat:Quadrupedal{
protected:
    string getNoise();
    string getSpecies();
public:
    Cat(string name);
    
};


#endif
