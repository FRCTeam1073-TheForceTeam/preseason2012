//Zoo Implementation - Rookies don't need to see this to work with the class, the header is documented

#include <iostream>
#include "Zoo.h"
#include "Animal.h"
#include <typeinfo>

Zoo::Zoo(string name){
    this->name = name;
}
string Zoo::getZooName(){
    return name;
}

void Zoo::addAnimal(Animal* animal){
    animals.push_back(animal);
}

int Zoo::getTotalAnimalCount(){
    return (int)animals.size(); //returns a long, but that won't be problematic
}

void Zoo::printAnimalNames(){
    for(int i = 0; i < this->getTotalAnimalCount(); i++){
        cout << animals[i]->getName();
        cout << "\n";
    }
}

void Zoo::printNamesBySpecies(string species){
    bool none = true;
    for(int i = 0; i < this->getTotalAnimalCount(); i++){
        if(animals[i]->getSpecies() == species){
            if(none) none = false;  //not sure if it's faster to reassign a variable, or to check the value of it animals.Size() times. probably the latter...
            cout << ("\t" + animals[i]->getName() + "\n");
        }
    }
    if(none) cout << ("There is no " + species + " in the " + name + "...\n");
}
std::vector<string> Zoo::speciesInZoo(){
    std::vector<string> speciesInZoo;
    for(int i = 0; i < this->getTotalAnimalCount(); i++){
        if(speciesInZoo.empty()){
            speciesInZoo.push_back(animals[i]->getSpecies());
        }
        else{
            bool already_exists = false;
            for(int j = 0; j < speciesInZoo.size(); j++){
                already_exists = animals[i]->getSpecies() == speciesInZoo[j];
                if(already_exists) break;
            }
            if(!already_exists) {
                speciesInZoo.push_back(animals[i]->getSpecies());           
            }
        }
    }
    return speciesInZoo;
}
int Zoo::getSpeciesCount(){    
 
    return (int)speciesInZoo().size();
}
void Zoo::printSpeciesNames(){
    std::vector<string> s = speciesInZoo();
    for(int i = 0; i < s.size(); i++){
        cout << ("\t" + s[i] + "\n");
    }
}
int Zoo::getTotalNumberOfLegs(){
    int leg_count = 0;
    for (int i = 0; i < this->getTotalAnimalCount(); i++){
        leg_count += animals[i]->getLegNumber();
    }
    return leg_count;
}

int Zoo::getFishInstances(){
    int count = 0;
    for(int i = 0; i < this->getTotalAnimalCount(); i++){
        Fish* fish = dynamic_cast<Fish*>(animals[i]);
        if (fish != NULL) count++;
    }
    return count;
}

int Zoo::getQuadrupedalInstances(){
    int count = 0;
    for(int i = 0; i < this->getTotalAnimalCount(); i++){
        Quadrupedal* quadrupedal = dynamic_cast<Quadrupedal*>(animals[i]);
        if (quadrupedal != NULL) count++;
    }
    return count;
}

