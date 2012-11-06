/* Fish Header
    The Fish class is a concrete implementation of the abstract Animal class. It contains code for all the abstract methods, or method stubs in Animal.h */

#ifndef RookieOOP_Fish_h
#define RookieOOP_Fish_h
#include "Animal.h"
#include <string>
class Fish: public Animal{
protected:
    string getNoise(); 
public:
    Fish(string name);
    int getLegNumber();
    string getSpecies();
};

#endif
