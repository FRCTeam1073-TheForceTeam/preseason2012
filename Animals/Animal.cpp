#include "Animal.h"

Animal::Animal() {
	name = "";
	noise = "";
}
string Animal::getName() {
	return name;
}
void Animal::setName(string n) {
	name = n;
}
void Animal::makeNoise() {
	cout << "hello world\n";
}
void Animal::setNoise(string n) {
	noise = n;
}
