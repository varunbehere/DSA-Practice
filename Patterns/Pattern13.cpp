#include <iostream>
using namespace std;

void PrintPattern (int n){
    int counter = 1;
    for (int i = 1; i<= n; i++){
        for (int j = 1; j <= i; j++){
            cout << counter <<" ";
            counter ++;
        }
        cout <<endl;
    }
}

int main (){
    int n = 5;

    PrintPattern (n);
    return 0;
}