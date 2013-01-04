//Dog.h - Definition of the Dog class which is a specialized subclass (like Pig), of Animal

#ifndef Project_Dog_h
#define Project_Dog_h
#include "Animal.h"
using namespace std;
class Dog : public Animal{
private:
    string breed;
public:
    Dog(string entername, int enterage, bool entergender, string enterbreed);
    string getBreed();
    void chaseTail();
    int getAgeindogyears();
    
    
};


#endif
