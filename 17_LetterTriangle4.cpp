#include <iostream>
using namespace std;

void PrintTriangle (int n){
    
    for (int i = n; i > 0; i--)
    {
        char ch = 'A' + n - 1;
        for (int j = 1; j <= n-i+1; j++, ch--){
            cout<<ch;
        }
        cout <<endl;
    }
}

int main (){
    PrintTriangle (6);
    return 0;
}