//
//  Beagle.h
//  RookieOOP
//
//  Created by Irfan Ugur on 11/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef RookieOOP_Beagle_h
#define RookieOOP_Beagle_h
#include "Dog.h"
class Beagle : public Dog{
public:
    Beagle(string name);
    string getBreed();
    void makeNoise();   //beagles do something special...
};

#endif
