#include <iostream>
using namespace std;

int SecondLargest (int arr[], int n){
    int first = arr[0];
    int second = -1;
    
    for (int i = 0; i < n; i++){
        if (arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first){
            second = arr[i];
        }
    }
    return second;
}

int main (){

    int arr[] = {85, 23, 6, 11, 80, 90, 6, 11};
    int n = 8;

    int iSecondLargest = SecondLargest(arr, n);
    cout <<"Second Largest " << iSecondLargest << endl;

    return 0;
}