/*
    Program: Demonstrating the Copy Constructor in C++ for Primitive Data Types

    Description:
    This program illustrates how copy constructors work with primitive data types in C++,
    such as `int` and `string`.

    Key Concept: Shallow vs. Deep Copy for Primitive Data Types
    -----------------------------------------------------------
    In C++, primitive data types (like `int`, `float`, `char`, etc.) do not require special
    handling in terms of shallow or deep copy. This is because:
    
    - Primitive types hold their actual value directly in memory. When a copy of a primitive 
      type is made (e.g., during assignment or copy construction), the value is simply 
      duplicated (i.e., copied by value). This behavior ensures that the new variable or 
      object contains an independent copy of the original value, avoiding any issues related 
      to memory sharing.
      
    - For example, copying an `int` variable will create a new `int` with the same value, 
      but it will be stored at a different memory location. Changing the copied variable 
      won't affect the original variable.

    The `string` class in C++ is a standard library type that internally manages its own 
    memory, but it also follows the value-copy semantics, meaning that when a `string` 
    object is copied, the content of the string is duplicated to ensure that the copied 
    object is independent of the original.

    In this program:
    1. A class `Example` is defined with two member variables: 
       - `rollNo` (int): to store the roll number.
       - `name` (string): to store the name.

    2. The class has a parameterized constructor for initializing its members.
    3. The default copy constructor is used to create a copy of an `Example` object, 
       and since both `int` and `string` are safely copied by value, no issues arise.
    4. The program demonstrates that modifying the copied object does not affect the original.

    Summary:
    Primitive types don't have issues with shallow vs. deep copy because their values 
    are directly duplicated during the copy process, ensuring independence between the 
    original and the copied variable.

*/

#include <iostream>
using namespace std;

class Example {
  
  public:
    int rollNo;
    string name;
  
    // Parameterized constructor
    Example (int rollNo, string name) {
        this->rollNo = rollNo;
        this->name = name;
    }
  
    // Print method
    void Print() {
        cout << "Roll No: " << this->rollNo << endl;
        cout << "Name: " << this->name << endl;
    }
};

int main() 
{
    Example E1(1, "ABC");
    E1.Print();
    
    Example E2(E1);  // Copy constructor will be called
    E2.Print();
    
    cout << endl;
    cout << "After Changes" << endl;
    cout << endl;
    
    E2.rollNo = 12;
    
    E1.Print();
    E2.Print();

    return 0;
}
