#include <iostream>
using namespace std;

void Print (int n){
  for (int i = 1; i <= n; i++) {
        // Print left stars
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }
        // Print middle spaces
        for (int j = 1; j <= 2 * (i - 1); j++) {
            cout << " ";
        }
        // Print right stars
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part
    for (int i = 1; i <= n; i++) {
        // Print left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Print middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Print right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() 
{
    Print (6);
    return 0;
}