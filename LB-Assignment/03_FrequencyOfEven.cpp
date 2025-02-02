#include <iostream>
using namespace std;

int FrequencyOfEven (int arr [], int n){
    int iCount = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            iCount ++;
        }
    }
    return iCount;
}

int main (){

    int arr[] = {85,66,3,80,93,88};
    int n = 6;

    int Frequency = FrequencyOfEven(arr, n);
    cout <<"Frequency : " << Frequency << endl;

    return 0;   
}