#include <iostream>
using namespace std;

void PrintPattern (int n){
    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= n; j ++){
            cout <<"* "; 
        }
        cout << endl;
    }
}

int main (){
    int n = 5;
    PrintPattern(n);
}