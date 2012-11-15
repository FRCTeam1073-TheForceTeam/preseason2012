//
//  main.cpp
//  Project
//
//  Created by Irfan Ugur on 11/14/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Dog.h"
#include "Pig.h"
#define size(x) sizeof(x)/sizeof(x[0])
using namespace std;
int main (int argc, const char * argv[])
{
    //Make some objects of the Dog class.
    Dog *spot = new Dog("Spot", 7, true, "Lab");
    Dog *michael = new Dog("michael", 15, false, "begal");  //Mathew T, insisted on making Michael female... :P
    
    cout << "\n\nthis dog's name is " << spot->getName() << " ";
    if(spot->isMale()){
        cout << "his";
    }
    else{
        cout << "her";
    }
    cout << " age is " << spot->getAge() << ".\n";
    
    //make spot do some Dog things a few times..
    for(int i = 0; i < 3; i++){
        spot->chaseTail();
    }
    
    //a year has since passed after chasing his tale 3 times
    spot->getOlder();
    
    //print out that same age logic. As we can see, Spot is in fact a year older.
    cout << "this dog's name is " << spot->getName() << " ";
    if(spot->isMale()){
        cout << "his";
    }
    else{
        cout << "her";
    }
    cout << " age is " << spot->getAge() << ".\n";
    
    //demonstrate our useful function to turn human years into dog years...
    cout << "\n" << michael->getName() + " is " << michael->getAge() <<  " but in Dog years " 
     << "he is " << michael->getAgeindogyears() << "\n\n";
             
    //make an object of the Pig class
    Pig *harold = new Pig("Harold", 7, true, true, false);
    
    cout << harold->getName();
    if (harold->isAngry()){
       cout << " is a very agressive pig ";
    }
    else{
       cout << " is a very peaceful pig ";
    }
    cout << " who has a bacon mass of " << harold->calculateNetWeightInBacon(0.2f);
    
    //makes an Array of Animals. This is something similar to a list that has 5 slots for Animals. Notice how we can fill it up with generic, unspecified Animals, but also Dogs and Pigs since those are subclasses of the Animal class. They can do everything an Animal can do, and then some, but since this is an Animal array, we only can look and and care about their Animal aspects - nothing more!
    int size = 5;
    Animal **someanimals = new Animal*[size];
    someanimals[0] = michael;   //Element #0 is filled with the Dog Michael that we created  previously.
    someanimals[1] = new Pig("Robert", 66, true, false, true);  //#1 is filled with a Pig we created on the spot here
    someanimals[2] = new Animal("Timmy", 5, true);  //#2 is filled with a generic Animal that we created on the spot
    someanimals[3] = harold;    //#3 is filled with Harold the pig; from earlier
    someanimals[4] = new Dog("Haaans", 34, true, "husky");  //#4 is filled with a new Dog
    cout << "\n\n\n";
    //that comment wraps cleanly in XCode, it probably won't elsewhere...
    /* While the Animal class provides different levels of encapsulation, we have to be weary that different implementations of Animal reserve different amounts of RAM so functions that depend on memory sizes (like the one at the top, which is aa common macro function), will not return a desired value */
     
    //loop through someanimals, and print out Animal information for each animal is in it.
    for(int i = 0; i < size; i++){
        if(someanimals[i]!=NULL){
            cout << someanimals[i]->getName() << "\t" << someanimals[i]->getAge() << "\n";
        }
    }
    
    //signals end of program - everything finished as expected.
    return 0;
}

