//
//  PurpleDragon.h
//  RookieOOP
//
//  Created by Irfan Ugur on 11/7/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef RookieOOP_PurpleDragon_h
#define RookieOOP_PurpleDragon_h
#include "Animal.h"

class PurpleDragon : public Animal{
protected:
    string getNoise(); 
public:
    PurpleDragon(string name);
    int getLegNumber();
    string getSpecies();
    
    void breathePurpleFire(Animal* target);
};


#endif
