// Description
// This program demonstrates the concept of multiple inheritance in C++.
// Multiple inheritance allows a class to inherit from more than one base class, 
// meaning the derived class can have access to all members (properties and methods) 
// of both parent classes.

// In this program:
// 1. Two base classes, `Base1` and `Base2`, are defined, each with a constructor that prints a message.
// 2. The derived class `Child` inherits from both `Base1` and `Base2`. It has its own member variables and constructor.
// 3. The `Child` class concatenates strings from `Base1`, `Base2`, and its own class to form a new string, 
//    which is printed in the constructor.
// 4. When an object of the `Child` class is created, the constructors of both base classes and the derived class 
//    are called in sequence, demonstrating how multiple inheritance works in C++.

#include <iostream>
using namespace std;

class Base1{
    public :
        string base1_Str = "Base 1 String";

        Base1 (){
            cout << "Base 1 Constructor" << endl;
        }
};

class Base2{
        public :
        string base2_Str = "Base 2 String";

        Base2 (){
            cout << "Base 2 Constructor" << endl;
        }
};

class Child : public Base1, public Base2{
    public :
        string child_String = "Child String";
        string newly_Updated_String = base1_Str + " - " + base2_Str + " - " + child_String;

        Child (){
            cout << "Child Constructor" << endl;
            cout << "New String : " << newly_Updated_String << endl;
        }
};

int main (){
    Child c1;

    return 0;
}