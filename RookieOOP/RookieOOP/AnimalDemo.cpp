//
//  main.cpp
//  RookieOOP
//
//  Created by Irfan Ugur on 11/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <string>
#include "Animal.h"
#include "Fish.h"
#include "Quadrupedal.h"
#include "Dog.h"
#include "Beagle.h"
#include "Cat.h"

void printAnimalInfo(Animal* inputAnimal){
    
    //this code will pull information from your animal as it is defined in the class...
    
    cout << ("\n\nSpecies:\t" + inputAnimal->getSpecies());
    cout << ("\nName:\t" + inputAnimal->getName());
    cout << "\nNumber of legs:\t";
    cout << inputAnimal->getLegNumber();
    cout << ("\nBreed\t" + inputAnimal->getBreed());
    
    //this code will do a unique noise OR any other code you wrote for that matter in your animal class.
    
    cout << ("\nSay something, " + inputAnimal->getName() + "!\n");
    inputAnimal->makeNoise();
    cout << "\n";
    
}

int main1 (int argc, const char * argv[])
{
 

    Fish* nemo = new Fish("Nemo");
    Fish* dory = new Fish("Dory");
    
    Cat* kitty = new Cat("Kitty");
    Dog* spot = new Dog("Spot");
    Beagle* max = new Beagle("Max");
    
    //  /* Let's print out their info with the function I declared at the top! Notice how the function takes Animals, yet we're passing in Dogs, Fish, Cats, etc.
    printAnimalInfo(nemo);
    printAnimalInfo(dory);
    printAnimalInfo(kitty);
    printAnimalInfo(spot);
    printAnimalInfo(max);
    //  */
    
    //The animals are casuing mischief!
    spot->chaseCat(kitty);
    kitty->eatAFish(nemo);
    kitty->eatAFish(dory);
    
    return 0;
}
