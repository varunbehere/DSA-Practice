#include <iostream>
using namespace std;

void PrintPattern (int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j ++){
            if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0)){
                cout << "1 ";
            }
            else{
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main (){
    int n = 5;

    PrintPattern(n);
    return 0;
}