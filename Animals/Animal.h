#ifndef Animal_h
#define Animal_h

#include <string>
#include <iostream>
using namespace std;

class Animal {
private:
	string name;
	string noise;
public:
	Animal();
	string getName();
	void setName(string n);
	void makeNoise();
	void setNoise(string n);
};
#endif