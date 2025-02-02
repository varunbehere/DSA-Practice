#include <iostream>
using namespace std;

void PrintRange (int arr[], int n, int iStart, int iEnd){
    for (int i = 0; i < n; i++){
        if (arr [i] >= iStart && arr[i] <= iEnd){
            cout << arr[i] << endl;
        }
    }
}

int main (){
    int arr[] = {85, 23, 6, 11, 80, 11, 6, 11};
    int n = 8;

    int iStart = 10;
    int iEnd = 50;

    PrintRange(arr, n, iStart, iEnd);

    return 0;
}