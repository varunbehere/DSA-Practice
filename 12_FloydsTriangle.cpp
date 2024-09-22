#include <iostream>
using namespace std;

void Print (int n){
  int iCnt = 1;
  for (int i = 1; i<= n; i++){
    for (int j = 1; j <= i; j++, iCnt++){
      cout<<iCnt<<" ";
    }
    cout<<endl;
  }
}

int main() {
    Print (6);
    return 0;
}