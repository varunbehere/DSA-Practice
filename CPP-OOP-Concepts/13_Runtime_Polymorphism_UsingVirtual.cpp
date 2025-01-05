#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "This is generic make sound coming from Animal Class" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound()  {
        cout << "Dog Barks!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound()  {
        cout << "Cat Meows!" << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    Animal* animalPtr1 = &dog;
    animalPtr1->makeSound(); 

    Animal* animalPtr2 = &cat;
    animalPtr2->makeSound();

    return 0;
}
