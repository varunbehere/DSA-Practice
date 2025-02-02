#include <iostream>
using namespace std;

void DivisibleBy3and5 (int arr[], int n){
    for (int i = 0; i < n; i++){
        if ((arr[i] % 3 == 0) && (arr[i] % 5 == 0)){
            cout  << arr[i] << endl;
        }
    }
}

int main (){
    int arr [] = {85,66,3,15,93,88};
    int n = 6;

    DivisibleBy3and5(arr, n);

    return 0;
}