/* Beagle Header
 The Beagle class is a concrete implementation of the concrete Dog class. Unlike an Animal class, Or a Quadrupedal class, a Dog can exist in its own right. Like thier parent class, Beagles can also exist in their own right. Beagles are specialized Dogs. 
 
     Additionally, Beagles will behave EXACTLY like a Dog will, except for the methods that the Beagle class over rides. If you call the same methods on a dog, they'll have different results */
#ifndef RookieOOP_Beagle_h
#define RookieOOP_Beagle_h
#include "Dog.h"
class Beagle : public Dog{
public:
    Beagle(string name);
    string getBreed();  //Beagles override getBreed() which was defined ALL the way back in Animal.h
    void makeNoise();   //Beagles override the virtual method makeNoise() Which existed in the Animal class.
    void jump();        //Mehtod unique to Beagles
};

#endif
