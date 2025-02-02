#include <iostream>
using namespace std;

void PrintPattern (int n){
    for (int i = 1; i <= n; i ++){
        
        for (int j = 1; j <= (n-i);j ++){
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i) - 1 ; j++){
            cout << "* ";
        }
        for (int j = 1; j <= (n-i);j ++){
            cout << "  ";
        }
        cout << endl;
    }
}

int main (){
    int n = 3;
    PrintPattern(n);
}