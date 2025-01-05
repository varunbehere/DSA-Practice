// Description: 
// This code demonstrates the concept of multi-level inheritance in C++. 
// It defines three classes: GrandParent, Parent, and Child, where the inheritance hierarchy is as follows:
// 1. 'Parent' class inherits from the 'GrandParent' class.
// 2. 'Child' class inherits from the 'Parent' class.
//
// Each class has its own constructor, and when an object of the 'Child' class is created, 
// all the constructors in the hierarchy are called in order, starting from 'GrandParent'.
// The 'Child' class also concatenates strings from all three classes to form a new string, 
// which is printed in the 'Child' class constructor to demonstrate inheritance of properties.
//
// The order of constructor calls shows the multilevel inheritance, where the base class 
// constructor (GrandParent) is called first, followed by the intermediate class constructor (Parent), 
// and finally, the derived class constructor (Child).
// The 'Child' class concatenates its own string with those inherited from 'Parent' and 'GrandParent', 
// showing how members of the base and intermediate classes can be accessed and used in the derived class.

#include <iostream>
using namespace std;

// GrandParent class (Base class)
class GrandParent {
    public : 
        string grandString = "GrandParent";  // String defined in GrandParent class

        GrandParent() {
            // Constructor for GrandParent class
            cout << "GrandParent Constructor" << endl;
        }
};

// Parent class (Intermediate class) inherits from GrandParent
class Parent : public GrandParent {
    public : 
        string parentString = "Parent";  // String defined in Parent class

        Parent() {
            // Constructor for Parent class
            cout << "Parent Constructor" << endl;
        }
};

// Child class (Most derived class) inherits from Parent
class Child : public Parent {
    public : 
        string childString = "Child";  // String defined in Child class
        // Concatenating strings from GrandParent, Parent, and Child classes
        string newStr = grandString + " - " + parentString + " - " + childString;

        Child() {
            // Constructor for Child class
            cout << "Child Constructor" << endl;
            cout << "Newly Updated String : " << newStr << endl;  // Print concatenated string
        }
};

int main (){
    // Creating an object of the Child class
    // This will invoke the constructors of GrandParent, Parent, and Child in order
    Child c1;

    return 0;
}
