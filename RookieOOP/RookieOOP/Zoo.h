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
    void addAnimal(Animal* animal);
    void printAnimalNames();    //prints the name of every animal in the zoo
    void printSpeciesNames();   //prints the name of every kind of animal there is in the zoo
    void printNamesBySpecies(string species);    //prints the name of every animal of x species
    int getTotalAnimalCount();  //returns the amount of animals that are in the zoo
    int getSpeciesCount();   //returns the amount of different species that are in the zoo.
    int getTotalNumberOfLegs();    //returns the amount of legs the zoo contains
    int getFishInstances(); //returns number of animals that are implementations of the fish class
    int getQuadrupedalInstances(); //returns the number of animals that are implementations of the Quadrupedal class.
};


#endif
