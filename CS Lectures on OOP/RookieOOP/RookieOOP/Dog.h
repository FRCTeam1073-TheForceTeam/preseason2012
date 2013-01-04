/* Dog Header
    The Dog class is a concrete implementation of the abstract Quadrupedal class. It implements any left over methods from the Animal class that Quadrupedal did not pick up    */

#ifndef RookieOOP_Dog_h
#define RookieOOP_Dog_h
#include "Quadrupedal.h"
#include "Cat.h"
#include <string>
class Dog: public Quadrupedal{
protected:
    string getNoise();
public:
    string getSpecies();
    Dog(string name);
    void chaseCat(Cat* target); //method unique to Dogs and their subclasses.
};


#endif