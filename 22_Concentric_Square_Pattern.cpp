#include <iostream>
using namespace std;

void print (int n){
  for (int i = 1; i <= 2 * n - 1; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            // Distances
            int top = i - 1;
            int left = j - 1;
            int right = (2 * n - 1) - j;
            int bottom = (2 * n - 1) - i;

            cout << (n  - min(min(top, bottom), min(left, right))) <<" ";
        }
        cout << endl;
    }
}

int main() 
{ 
    print (4);
    return 0;
}