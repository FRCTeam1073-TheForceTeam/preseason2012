/*Qaudrupedal Header (really should've been made Quadruped... whatever)
 This is ANOTHER abstract class that inherits from the Animal class meaning you can't implement Quadrupedals, you still have to write a subclass
 
    What's special about this abstract class, is that it does implement a method, getLegNumber().
    This means that all subclasses of Quadrupedal will have the same definition for getLegNumber(), but all implementations of Animal will not.
 */

#ifndef RookieOOP_Quadrupedal_h
#define RookieOOP_Quadrupedal_h
#include"Animal.h"
#include <string.h>
class Quadrupedal: public Animal{
public: 
    Quadrupedal(string name);
    int getLegNumber(); //implentation of an abstract method from Animal
};


#endif
