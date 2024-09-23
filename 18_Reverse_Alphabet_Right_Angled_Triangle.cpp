#include <iostream>
using namespace std;

void Print (int n){
  for (int i = 1; i <= n; i++){
    char ch = 'A' + (n-1);
    for (int j = 1; j <= i; j++, ch--){
      cout<<ch;
    }
    cout<<endl;
  }
}

int main() 
{
    Print (6);
    return 0;
}

// F
// FE
// FED
// FEDC
// FEDCB
// FEDCBA