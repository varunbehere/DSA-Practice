  /*
    Program: Calculator with Function Overloading for Integer and Float Addition

    Concept: Function Overloading in C++

    Description:
    This program demonstrates **function overloading**, a core concept of **polymorphism** in C++,
    where multiple functions can have the same name but different parameter types or numbers of parameters.
    The `Calculator` class in this program overloads the `Add` function to handle both integer and 
    floating-point (float) addition operations.

    The class defines multiple overloaded methods:
    
    - `Add(int, int)` : Adds two integers.
    - `Add(int, int, int)` : Adds three integers.
    - `fAdd(float, float)` : Adds two floating-point numbers.
    - `fAdd(float, float, float)` : Adds three floating-point numbers.

    The main function creates an instance of the `Calculator` class and calls these overloaded
    methods to perform integer and floating-point additions. The results are then printed to
    the console.

    Purpose:
    The purpose of this program is to practice **function overloading** and demonstrate how
    to use the same function name with different types and numbers of parameters, showcasing 
    one of the core features of **polymorphism** in C++.
*/

#include <iostream>
using namespace std;

class Calculator {
    int iResult;
    float fResult;

    public:
        Calculator() {
            iResult = 0;
            fResult = 0.0f;
        }

    // Overloaded functions for integer addition
    int Add(int iValue1, int iValue2) {
        iResult = iValue1 + iValue2;
        return iResult;
    }

    int Add(int iValue1, int iValue2, int iValue3) {
        iResult = iValue1 + iValue2 + iValue3;
        return iResult;
    }

    // Overloaded functions for floating-point addition
    float fAdd(float fValue1, float fValue2) {
        fResult = fValue1 + fValue2;
        return fResult;
    }

    float fAdd(float fValue1, float fValue2, float fValue3) {
        fResult = fValue1 + fValue2 + fValue3;
        return fResult;
    }
};

int main() {
    Calculator calc;  // Single object for both integer and float operations

    // Integer addition
    int IntResultTwoParameters = calc.Add(123, 321);
    int IntResultThreeParameters = calc.Add(123, 321, 231);

    cout << "IntResultTwoParameters: " << IntResultTwoParameters << endl;
    cout << "IntResultThreeParameters: " << IntResultThreeParameters << endl;

    // Floating-point addition
    float FloatResultTwoParameters = calc.fAdd(123.321f, 321.123f);
    float FloatResultThreeParameters = calc.fAdd(123.321f, 321.231f, 231.123f);

    cout << "FloatResultTwoParameters: " << FloatResultTwoParameters << endl;
    cout << "FloatResultThreeParameters: " << FloatResultThreeParameters << endl;

    return 0;
}
