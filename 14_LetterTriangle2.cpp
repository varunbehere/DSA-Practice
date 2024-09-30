#include <iostream>
using namespace std;

void printTriangle (int n){
    for (int i = n; i > 0; i--){
        for (int j = 1; j <= i; j++){
            cout << char(64+j) << " ";
        }
        cout << endl;
    }
}

int main (){
    printTriangle (6);
    return 0;
}