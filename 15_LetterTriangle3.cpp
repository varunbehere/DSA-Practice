#include <iostream>
using namespace std;

void PrintTriangle(int n){
    char ch = 'A';  
    for (int i = 1; i <= n; i++,ch++){
        for (int j = 1; j <= i; j++){
            cout << ch;
        }
        cout << endl;
    }
}

int main(){
    PrintTriangle(6);
    return 0;
}