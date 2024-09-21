#include <iostream>
using namespace std;

void PrintDiamond (int n){
  
  // Print First Half
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n-i; j ++){
      cout<<" ";
    }
    
    for (int j = 1; j <= (2 * i) - 1; j ++){
      cout<<"*";
    }
    
    for (int j = 1; j <= n-i; j ++){
      cout<<" ";
    }
    cout<<endl;
  }
  
  // Second Half
  for (int i = 1; i <= n; i++){
    for (int j =1; j <= i -1; j++ ){
      cout<<" ";
    }
    
    for (int j =1; j <= (2*n)- i - (i-1); j++ ){
      cout<<"*";
    }
    
    for (int j =1; j <= n-i; j++ ){
      cout<<" ";
    }
    cout<<endl;
  }
  
}

int main() {
    PrintDiamond (4);
    return 0;
}