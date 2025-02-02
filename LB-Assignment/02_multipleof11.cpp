#include <iostream>
using namespace std;

void MultipleOf11(int arr[], int n){
    for (int i = 0; i < n; i++){
        if (arr[i] % 11 == 0){
            cout << arr[i] << endl;
        }
    }
}

int main (){

    int arr [] = {85,66,3,55,93,88};
    int n = 6;

    MultipleOf11(arr, n);
    return 0;
}