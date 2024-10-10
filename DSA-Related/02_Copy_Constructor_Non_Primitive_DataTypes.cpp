/*
    Program: Demonstrating Shallow Copy in C++ for Dynamically Allocated Data

    Description:
    This program demonstrates the concept of shallow copy using dynamic memory allocation 
    for the class `Example`. The class contains two pointer members (`RollNo` and `StudentId`) 
    that store memory addresses of dynamically allocated integers.

    Key Concept: Shallow Copy
    -------------------------
    Shallow copy occurs when an object is copied without creating new instances of the dynamically 
    allocated members. Instead, the copied object’s pointers point to the same memory locations as 
    the original object's pointers.

    In this program:
    1. The constructor dynamically allocates memory for `RollNo` and `StudentId` using `new`.
    2. When the object `E2` is created as a copy of `E1`, the default copy constructor is used, 
       resulting in a shallow copy.
    3. Since the shallow copy copies the pointer addresses, both `E1` and `E2` share the same memory 
       locations for `RollNo` and `StudentId`. Thus, modifying the data through `E2` affects `E1` as well.

    Problem:
    - This behavior can lead to unintended side effects, as changes in one object (like `E2`) will affect 
      the original object (`E1`), since both point to the same memory addresses.

    Solution:
    - To prevent this, a deep copy must be implemented, where new memory is allocated for the copied 
      object's pointer members to ensure they are independent.

    This example shows the issues of shallow copy when using pointers and dynamically allocated memory.
*/

#include <iostream>
using namespace std;

class Example {
    public:
        int* RollNo;      // Pointers to dynamically allocated memory
        int* StudentId;
    
    // Parameterized constructor with dynamic memory allocation
    Example(int RollNo, int StudentId) {
        this->RollNo = new int;
        this->StudentId = new int;

        *(this->RollNo) = RollNo;
        *(this->StudentId) = StudentId;
    }

    // Print method to display the values
    void Print() {
        cout << "Roll No: " << *(this->RollNo) << endl;
        cout << "Student Id: " << *(this->StudentId) << endl;
    }
};

int main() {
    Example E1(123, 12345);  // Create the first object
    E1.Print();

    Example E2(E1);  // Shallow copy: E2 shares the same memory as E1
    E2.Print();

    cout << endl;
    cout << "After Changes" << endl;
    cout << endl;

    // Modify the StudentId via E2 (this also affects E1 due to shallow copy)
    *(E2.StudentId) = 54321;

    E1.Print();  // E1 will reflect the change made via E2
    E2.Print();  // E2 also reflects the change

    return 0;
}
