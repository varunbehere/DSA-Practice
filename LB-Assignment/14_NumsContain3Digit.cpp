#include <iostream>
using namespace std;

void Print3DigitNums (int arr[], int n){
    int iDigit = 0;
    int num = 0;

    for (int i = 0; i < n; i++){
        num = arr[i];
        iDigit = 0;
        while (num != 0){
            num = num /10;
            iDigit ++; 
        }
        if (iDigit == 3){
            cout << arr[i] << endl;
        }
    }
}

int main() {
    int arr[] = {124,6344,6,3,577,5,33,45,6,66,5,4,211,11,1};
    int n = 15;

    Print3DigitNums(arr, n);
    return 0;
}
