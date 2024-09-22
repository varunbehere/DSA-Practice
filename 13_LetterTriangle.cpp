#include <iostream>
using namespace std;

void Print (int n){
  for (int i = 0; i < n; i++){
    for (char ch = 'A'; ch <= 'A' + i; ch++){
      cout<<ch<<" ";
    }
    cout<<endl;
  }
}

int main() {
    Print (6);
    return 0;
}