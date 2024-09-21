#include <iostream>
using namespace std;

void PrintPartialDiamond (int n){
// First Half
  for (int i = 1; i <= n; i++){
    for (int j = 1; j<=i; j++){
      cout<<"*";
    }
    cout<<endl;
  }
// Another Half
  for (int i = n-1 ; i > 0; i--){
    for (int j = 1; j<=i; j++){
      cout<<"*";
    }
    cout<<endl;
  }
}

int main() {
    PrintPartialDiamond (4);
    return 0;
}