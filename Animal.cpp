using namespace std;

#include "Animal.h"
#include <iostream>
#include <string>

Animal::Animal() : _name("unknown") {
    cout << "constructing Animal object " << _name << endl;
};

Animal::Animal(string n, COLOR c) : _name(n), _color(c) {
    cout << "constructing Animal object " << _name << endl;
};

Animal::~Animal() {
    cout << "destructing Animal object " << _name << endl;
}

string Animal::getName() {
    return _name;
}


COLOR Animal::getColor() {
    return _color;
}

void Animal::speak() {
    cout << "Animal speaks " << endl;
}

Mammal::Mammal() : Animal() {
    cout << "constructing Mammal object " << Mammal::getName() << endl;
}

Mammal::Mammal(string name, COLOR color) : Animal(name, color) {
    cout << "Constructing Mammal object " << Mammal::getName() << endl;
}

Mammal::~Mammal() {
    cout << "destructing Mammal object " << Mammal::getName() << endl;
}

void Mammal::eat()  {
    cout << "Mammal eat " << endl;
}

void Mammal::move() {
    cout << "Mammal moves" << endl;
}

