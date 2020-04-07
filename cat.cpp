#include "cat.h"
#include <iostream>

Cat::Cat()
{
    energy = 100;
    hunger = 100;
    mood = 100;
}

void Cat::playWith()
{
    this->mood = this->mood + 1;
    cout << "Hello World!" << endl;
}

void Cat::feed()
{
    this->hunger = this->hunger + 1;
    cout << "Hello World!" << endl;
}

void Cat::shower()
{
    this->mood = 0;
    cout << "Hello World!" << endl;
}

void Cat::sleep()
{
    this->energy = 100;
    cout << "Hello World!" << endl;
}

void Cat::meow()
{
    cout << "Miaou !" << endl;
}
