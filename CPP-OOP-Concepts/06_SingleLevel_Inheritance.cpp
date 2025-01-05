// This program demonstrates single-level inheritance in C++.
// Inheritance is a feature of Object-Oriented Programming (OOP) where one class (Child class) 
// inherits the properties and methods of another class (Base class).
// 
// In this updated program:
// 1. The 'Base' class is the parent class with a constructor that prints a message and has a string attribute `str` initialized to "Base".
// 2. The 'Child' class inherits from 'Base' and adds its own string `childStr` by appending " - Child" to the Base class string.
// 3. The 'Child' class prints the concatenated string `childStr` to demonstrate how inherited properties can be accessed and modified in the derived class.
// 4. When an object of the 'Child' class is created, both the 'Base' and 'Child' class constructors are invoked in order.

#include <iostream>
using namespace std;

// Base class declaration
class Base {
    public:
        // Constructor for the Base class
        string str = "Base";
        Base () {
            cout << "Inside Base Class" << endl;
        }
};

// Child class declaration, inheriting from Base
class Child : public Base {
    public:
        // Constructor for the Child class
        string childStr = str + " - Child";
        Child () {
            cout << "Inside Child Class" << endl;

            cout << "Newly Updated String : " << childStr << endl;
        }
};

int main () {
    // Creating an object of the Child class
    // This will invoke both the Base and Child class constructors
    Child C1;

    return 0;
}
