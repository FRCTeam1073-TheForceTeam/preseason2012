//
//  Animal.h
//  Project
//
//  Created by Irfan Ugur on 11/14/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Project_Animal_h
#define Project_Animal_h
using namespace std;
class Animal{
protected:
    string name;
    int age;
    bool male;
public:
    Animal(string enteredname, int enteredage, bool enteredgender);
    string getName();
    int getAge();
    bool isMale();
    void getOlder();
};

#endif
