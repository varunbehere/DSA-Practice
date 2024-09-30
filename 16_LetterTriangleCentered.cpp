#include <iostream>
using namespace std;

void PrintTriangle (int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++){
            cout<<" ";
        }

        for (int j = 1; j <= i + i - 1; j++){
            cout << "*";
        }

        for (int j = 1; j <= n-i+1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main (){
    PrintTriangle (6);
    return 0;
}