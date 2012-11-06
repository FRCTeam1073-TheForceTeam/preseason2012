//
//  Quadrupedal.h
//  RookieOOP
//
//  Created by Irfan Ugur on 11/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef RookieOOP_Quadrupedal_h
#define RookieOOP_Quadrupedal_h
#include"Animal.h"
#include <string.h>
class Quadrupedal: public Animal{
public: 
    Quadrupedal(std::string name);
    int getLegNumber();
};


#endif
