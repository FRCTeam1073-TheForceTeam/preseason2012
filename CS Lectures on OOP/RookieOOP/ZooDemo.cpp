//
//  ZooDemo.cpp
//  RookieOOP
//
//  Created by Irfan Ugur on 11/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Zoo.h"
#include "Animal.h"
#include "Quadrupedal.h"
#include "Dog.h"
#include "Cat.h"
#include "Beagle.h"
#include "Fish.h"
#include "PurpleDragon.h"
int main (int argc, const char * argv[])
{
    //make a Zoo!
    Zoo* hollisTownZoo = new Zoo("Hollis Town Zoo");
    
    //add animals to it. Since all of these animals extend the class Animal, you can throw them all in - They all share common properties!
    hollisTownZoo->addAnimal(new Fish("Swimmy"));
    hollisTownZoo->addAnimal(new Dog("Spot"));
    hollisTownZoo->addAnimal(new Cat("Midnight"));
    hollisTownZoo->addAnimal(new Cat("Kitty"));
    hollisTownZoo->addAnimal(new Beagle("Haans"));
    hollisTownZoo->addAnimal(new Dog("Timmy"));
    
    cout << ("The " + hollisTownZoo->getZooName() + " has this many animals in it:\t");
    cout << hollisTownZoo->getTotalAnimalCount();
    
    hollisTownZoo->addAnimal(new Fish("Bubbles"));
    cout << "\nNow it has this many:\t";
    cout << hollisTownZoo->getTotalAnimalCount();
    
    //find out how many legs the zoo has...
    cout << ("\nThe " + hollisTownZoo->getZooName() + " has this many legs:\t");
    cout << hollisTownZoo->getTotalNumberOfLegs();
    
    //find out how many Quadrupedals it has.
    cout << "\nIt has this many Quadrupedals:\t";
    cout << hollisTownZoo->getQuadrupedalInstances();
    
    //find out how many Fish it has
    cout << "\nAnd this many fish:\t";
    cout << hollisTownZoo->getFishInstances();
    
    //get the list of every species in the Zoo
    cout << ("\nThe " + hollisTownZoo->getZooName() + " has these ");
    cout << hollisTownZoo->getSpeciesCount();
    cout << " species: \n";
    hollisTownZoo->printSpeciesNames();
    
    //let's see the names of the Zoo's fish...
    cout << ("\nThe " + hollisTownZoo->getZooName() + "'s Fish are named...\n");
    hollisTownZoo->printNamesBySpecies("Fish");
    
    //let's see the names of the Zoo's Purple Dragons...
    cout << ("\nThe " + hollisTownZoo->getZooName() + "'s Purple Dragons are named...\n");
    hollisTownZoo->printNamesBySpecies("Purple Dragon");
    
    hollisTownZoo->addAnimal(new PurpleDragon("Spike"));
    PurpleDragon* michaelRoss = new PurpleDragon("Michael Ross");
    hollisTownZoo->addAnimal(michaelRoss);
    
    
    //let's see the names of the Zoo's Purple Dragons... now that we hae some, they'll be in the Zoo.
    cout << ("\nThe " + hollisTownZoo->getZooName() + "'s Purple Dragons are named...\n");
    hollisTownZoo->printNamesBySpecies("Purple Dragon");
    
    //The Purple Dragon killed some of the animals in the Zoo!
    michaelRoss->breathePurpleFire(hollisTownZoo->releaseAnimal("Nemo"));   //Nemo wasn't in the Zoo... we'll handle this potential error!
    michaelRoss->breathePurpleFire(hollisTownZoo->releaseAnimal("Timmy"));
    michaelRoss->breathePurpleFire(hollisTownZoo->releaseAnimal("Haans"));
    
    cout << ("\nAfter The Dragon's Killing Spree, These are the animals that are left in the " + hollisTownZoo->getZooName() + "\n");
    hollisTownZoo->printAnimalNames();
    return 0;
}