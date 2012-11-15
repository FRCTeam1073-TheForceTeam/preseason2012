/* Cat Header
 The Cat class is a concrete implementation of the abstract Quadrupedal class. It implements any left over methods from the Animal class that Quadrupedal did not pick up and has a unique method of its own   */

#ifndef RookieOOP_Cat_h
#define RookieOOP_Cat_h
#include "Quadrupedal.h"
#include "Fish.h"
#include <string>
class Cat: public Quadrupedal{
protected:
    string getNoise();
public:

    Cat(string name);
    string getSpecies();
    //methods unique to the Cat class
    void eatAFish(Fish* dinner);
};


#endif
