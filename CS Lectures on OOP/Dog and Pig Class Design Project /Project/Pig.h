//
//  Pig.h
//  Project
//
//  Created by Irfan Ugur on 11/14/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Project_Pig_h
#define Project_Pig_h
#include "Animal.h"
using namespace std;
class Pig : public Animal{
private:
    bool hasTusks;
    bool isAggressive;
public:
    Pig(string entername, int enterage, bool entergender, bool enteredTuskState
        , bool enteredAggressiveness);
   
    bool doesHaveTusks();
    bool isAngry();
    
    void becomeBacon();
    float calculateNetWeightInBacon(float volume);
    
    
};




#endif
