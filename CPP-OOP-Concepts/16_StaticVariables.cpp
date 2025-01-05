#include <iostream>
using namespace std;

// Class definition
class TempClass {
public:
    // Static member variable shared among all instances of the class
    static int counterInClass;

    // Method demonstrating a static variable within a function
    void newFun() {
        // Static variable in the function retains its value between calls
        static int counterInFunction = 0;

        // Increment both static variables
        counterInFunction += 2;   // Function-scoped static variable
        counterInClass += 2;      // Class-level static variable

        // Display the values of the static variables
        cout << "Counter In Function (newFun): " << counterInFunction << endl;
        cout << "Counter In Class: " << counterInClass << endl;
    }

    // Method demonstrating that function-scoped static variables
    // cannot be accessed outside their defining function
    void newSun() {
        // counterInFunction is not accessible here because it is scoped
        // to the function `newFun()` where it is defined.

        // Increment only the class-level static variable
        counterInClass += 2;

        // Display the value of the class-level static variable
        cout << "Counter In Class (newSun): " << counterInClass << endl;
    }
};

// Definition and initialization of the static class member
int TempClass::counterInClass = 0;

int main() {
    // Create an object of TempClass
    TempClass tObj1;

    // Call methods using the first object
    tObj1.newFun(); // Increments and displays static variables
    tObj1.newSun(); // Increments and displays only class-level static variable
    tObj1.newFun(); // Static function variable retains value, class-level static continues
    tObj1.newFun(); // Further increments static variables

    // Create another object of TempClass
    TempClass tObj2;

    // Call methods using the second object
    tObj2.newFun(); // Shares the same class-level static variable but retains function-level state
    tObj2.newFun(); // Increments function-level and class-level static variables
    tObj2.newFun(); // Continues incrementing static variables

    return 0;
}
