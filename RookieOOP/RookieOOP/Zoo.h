/*Zoo Header 
 *  Contains a list of animals and methods to pull and interact with the animals it contains
 */
#ifndef RookieOOP_Zoo_h
#define RookieOOP_Zoo_h
#include <string>
#include <vector>
#include "Animal.h"
#include "Quadrupedal.h"
#include "Fish.h"


class Zoo{
    typedef std::vector<Animal*> animal_vector;
    typedef std::string string;
private:
    animal_vector animals;
    string name;   //name of the zoo
    std::vector<string> speciesInZoo();
public:
    Zoo(string name);
    string getZooName();
    void addAnimal(Animal* animal); //adds an animal into the Zoo
    void printAnimalNames();    //prints the name of every animal in the Zoo
    void printSpeciesNames();   //prints the name of every kind of animal there is in the Zoo
    void printNamesBySpecies(string species);    //prints the name of every Animal of x species
    int getTotalAnimalCount();  //returns the amount of animals that are in the Zoo
    int getSpeciesCount();   //returns the amount of different species that are in the Zoo.
    int getTotalNumberOfLegs();    //returns the amount of legs the Zoo contains
    int getFishInstances(); //returns number of Animals that are implementations of the Fish class
    int getQuadrupedalInstances(); //returns the number of Animals that are implementations of the Quadrupedal class.
};


#endif
