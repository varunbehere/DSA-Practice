#include <iostream>
using namespace std;

void PrintPattern (int n){
    for (int i = 0; i < n; i ++){
        for (int j = n-i; j >= 1; j --){
            cout <<"* "; 
        }
        cout << endl;
    }
}

int main (){
    int n = 5;
    PrintPattern(n);
}