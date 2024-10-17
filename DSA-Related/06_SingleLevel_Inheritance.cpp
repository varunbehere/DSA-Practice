// This program demonstrates single-level inheritance in C++.
// Inheritance is a feature of Object-Oriented Programming (OOP) where one class (Child class) 
// inherits the properties and methods of another class (Base class).
// 
// In this program:
// 1. The 'Base' class is the parent class with a constructor that prints a message.
// 2. The 'Child' class inherits from 'Base' and has its own constructor that prints another message.
// 3. When an object of the 'Child' class is created, both the 'Base' class and 'Child' class constructors are called.
//    This shows the order in which constructors are invoked in inheritance: base class first, followed by the derived class.

#include <iostream>
using namespace std;

// Base class declaration
class Base {
    public:
        // Constructor for the Base class
        Base () {
            cout << "Inside Base Class" << endl;
        }
};

// Child class declaration, inheriting from Base
class Child : public Base {
    public:
        // Constructor for the Child class
        Child () {
            cout << "Inside Child Class" << endl;
        }
};

int main () {
    // Creating an object of the Child class
    // This will invoke both the Base and Child class constructors
    Child C1;

    return 0;
}
