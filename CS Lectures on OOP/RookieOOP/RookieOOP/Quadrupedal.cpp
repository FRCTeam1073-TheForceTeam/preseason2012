/* Implementation of Quadrupedal. */

#include <iostream>
#include "Animal.h"
#include "Quadrupedal.h"
#include <string>

/*  All subclasses of Quadrupedal will return 4 when getLegNumber() is called on them   */
int Quadrupedal::getLegNumber(){
    return 4;
}
/*  Constructor for Quadrupedal, takes a string and shoots it up to the Animal Constructor  */
Quadrupedal::Quadrupedal(string name) : Animal(name) {}