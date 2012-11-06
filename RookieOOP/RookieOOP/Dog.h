#ifndef RookieOOP_Dog_h
#define RookieOOP_Dog_h
#include "Quadrupedal.h"
#include <string>
class Dog: public Quadrupedal{
protected:
    string getNoise();
    string getSpecies();
public:
    Dog(string name);
    
};


#endif