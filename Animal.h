#pragma once
using namespace std;

#include <iostream>
#include <string>
#pragma once

enum COLOR { Green, Blue, White, Black, Brown };

class Animal {
private:
    string _name;
    COLOR _color;

public:
    Animal();
    Animal(string n, COLOR c);
    ~Animal();

    virtual void speak();
    virtual void move() = 0;
    string getName();
    COLOR getColor();
};
class Mammal : public Animal {
public:
    Mammal();
    Mammal(string n, COLOR c);
    ~Mammal();

    virtual void eat() ;
    virtual void move() ;
};
