/*
    Destructor in C++
    
    A destructor is a special member function in a class that is executed automatically when an object
    of that class goes out of scope or is explicitly deleted. Its primary role is to release resources
    that the object may have acquired during its lifetime, such as dynamically allocated memory, file 
    handles, network connections, etc.

    Key Characteristics:
    - The destructor has the same name as the class but is prefixed with a tilde (~), e.g., ~Example().
    - It does not return a value (not even void).
    - A destructor cannot take any parameters, meaning it is always called without arguments.
    - Destructors are important for cleaning up resources like memory or other system resources, 
      ensuring no memory leaks or other issues occur after the object is no longer needed.
    
    In this code:
    - The destructor releases the dynamically allocated memory using `delete` to prevent memory leaks.
    - `delete data;` is used (and not `*data`) because `delete` frees the memory address, not the value stored at that address.

*/

#include <iostream>
using namespace std;

class Example {
    public:
        int *data;

        Example (int data){
            this -> data = new int;
            *(this -> data) = data;
        }

        void Print(){
            cout<<"Data: " << *(this -> data) << endl;
        }
        
        ~Example (){
            cout << "Destructor Called" << endl;
            delete data;  // Freeing the memory to avoid memory leaks.
        }
};

int main (){

    Example E1(10);  // Object E1 is created, and memory is allocated.
    E1.Print();      // Prints the data stored in the dynamically allocated memory.

    Example E2(20);  // Object E2 is created.
    E2.Print();      // Prints the data stored in E2.

    return 0;
    // Destructors for E1 and E2 are automatically called here, and memory is freed.
}
