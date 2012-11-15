//Animal.h - Definition of the Animal class which can be extended for increased specification.

#ifndef Project_Animal_h
#define Project_Animal_h
using namespace std;
class Animal{
protected:
    string name;
    int age;
    bool male;
public:
    Animal(string enteredname, int enteredage, bool enteredgender);
    string getName();
    int getAge();
    bool isMale();
    void getOlder();
};

#endif
