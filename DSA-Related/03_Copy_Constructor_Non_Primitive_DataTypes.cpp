/*
    Program: Demonstrating Deep Copy in C++ for Dynamically Allocated Data

    Description:
    This program demonstrates the concept of deep copy using dynamic memory allocation 
    for the class `Example`. The class contains two pointer members (`RollNo` and `StudentId`) 
    that store memory addresses of dynamically allocated integers.

    Key Concept: Deep Copy
    ----------------------
    Deep copy occurs when an object is copied and new instances of dynamically allocated members 
    are created. Each object has its own separate copy of the data, ensuring that changes made 
    to one object do not affect the other.

    In this program:
    1. The constructor dynamically allocates memory for `RollNo` and `StudentId` using `new`.
    2. A custom copy constructor is defined to create a deep copy of an existing object.
    3. The copy constructor allocates new memory for `RollNo` and `StudentId` and copies the 
       values from the source object (`obj`), ensuring both `E1` and `E2` are independent.
    4. Modifying `StudentId` through `E2` will not affect `E1`, demonstrating the benefits of 
       using deep copy.

    This example shows the effectiveness of deep copying when using pointers and dynamically 
    allocated memory.
*/

#include <iostream>
using namespace std;

class Example {
    public:
        int* RollNo;      // Pointers to dynamically allocated memory
        int* StudentId;
    
    // Parameterized constructor with dynamic memory allocation
    Example(int RollNo, int StudentId) {
        this->RollNo = new int;           // Allocate memory for RollNo
        this->StudentId = new int;        // Allocate memory for StudentId

        *(this->RollNo) = RollNo;         // Assign the value to RollNo
        *(this->StudentId) = StudentId;   // Assign the value to StudentId
    }

    // Copy constructor for deep copying
    Example(const Example &obj) {
        this->RollNo = new int;                // Allocate new memory for RollNo
        this->StudentId = new int;             // Allocate new memory for StudentId

        *(this->RollNo) = *(obj.RollNo);       // Copy the value from the original object
        *(this->StudentId) = *(obj.StudentId); // Copy the value from the original object
    }

    // Print method to display the values
    void Print() {
        cout << "Roll No: " << *(this->RollNo) << endl;
        cout << "Student Id: " << *(this->StudentId) << endl;
    }

    // Destructor to free allocated memory
    ~Example() {
        delete RollNo;      // Free memory for RollNo
        delete StudentId;   // Free memory for StudentId
    }
};

int main() {
    Example E1(123, 12345);  // Create the first object
    E1.Print();

    Example E2(E1);  // Deep copy: E2 gets its own memory
    E2.Print();

    cout << endl;
    cout << "After Changes" << endl;
    cout << endl;

    // Modify the StudentId via E2 (this does NOT affect E1)
    *(E2.StudentId) = 54321;

    E1.Print();  // E1 remains unchanged
    E2.Print();  // E2 reflects the change

    return 0;
}
