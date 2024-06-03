// 7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    Animal() {
        cout << "Animal Constructor called" << endl;
    }

    ~Animal() {
        cout << "\nAnimal Destructor called" << endl;
    }
};

// Intermediate class derived from Animal
class Mammal : public Animal {
public:
    Mammal() {
        cout << "\nMammal Constructor called" << endl;
    }

    ~Mammal() {
        cout << "\nMammal Destructor called" << endl;
    }
};

// Derived class derived from Mammal
class Dog : public Mammal {
public:
    Dog() {
        cout << "\nDog Constructor called" << endl;
    }

    ~Dog() {
        cout << "\nDog Destructor called" << endl;
    }
};

int main() {

    Dog myDog;

    return 0;
}
