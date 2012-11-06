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
    virtual std::string getNoise() = 0;
public:
	Animal(string name);
	virtual string getName();
    virtual string getSpecies() = 0;
    virtual string getBreed();
    virtual int getLegNumber() = 0;
    virtual void makeNoise();
};
#endif


/*
 C++ Tip:
 It's not good to include namespaces into header files, which is why you do not see "using namespace std;"
 at the top of this file, and instead of "string name;" you see "std::string name;"
 
 The reasoning behind this is that the std namespace is VERY big, and the benefit to saying
 "using namespace std;" is to tell the compiler that you want a std::string by default when it sees string.
 
 If we put a line like that in a header such as this one, every file that inlcludes Animal.h will pull in the std namepsace  which is a big, uneeded, pull on resources! That said, this project is a small one, and is by no means 
 mission critical for anything - and it makes the code waayyy easier to write and read.
 If you're code isn't including "Animal.h" you will have to either explicitly say you want the std namespace with std::string, or simply set it to the default with the using statement I typed above all of this...
 */
