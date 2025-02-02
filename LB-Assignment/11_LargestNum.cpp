#include <iostream>
using namespace std;

int Largest (int arr[], int n){
    int iMax = 0;
    for (int i = 0; i < n; i++){
        if (arr [i] > iMax){
            iMax = arr[i];
        }
    }
    return iMax;
}

int main (){
    int arr[] = {85, 23, 6, 11, 80, 90, 6, 11};
    int n = 8;

    int iLargest = Largest(arr, n);
    cout <<"Largest " << iLargest << endl;
    return 0;
}