//
//  Animal.h
//  RookieOOP
//
//  Created by Irfan Ugur on 11/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
#ifndef Animal_h
#define Animal_h

#include <string>
#include <iostream>
using namespace std;

class Animal {

protected:
    string name;
    virtual string getNoise() = 0;
public:
	Animal(string name);
	string getName();
    virtual string getSpecies() = 0;
    virtual string getBreed();
    virtual int getLegNumber() = 0;
    void makeNoise();
};
#endif
