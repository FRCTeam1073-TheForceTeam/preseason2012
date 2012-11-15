//
//  Dog.h
//  Project
//
//  Created by Irfan Ugur on 11/14/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Project_Dog_h
#define Project_Dog_h
#include "Animal.h"
using namespace std;
class Dog : public Animal{
private:
    string breed;
public:
    Dog(string entername, int enterage, bool entergender, string enterbreed);
    string getBreed();
    void chaseTail();
    int getAgeindogyears();
    
    
};


#endif
