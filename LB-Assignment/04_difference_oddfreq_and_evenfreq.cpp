#include <iostream>
using namespace std;

int DifferenceBetweenOddAndEvenFreq (int arr [], int n){
    int oddFreq = 0;
    int evenFreq = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            evenFreq ++;
        }
        else{
            oddFreq++;
        }
    }
    return (evenFreq - oddFreq);
}

int main (){

    int arr[] = {85,66,3,80,93, 88, 90};
    int n = 7;

    int Frequency = DifferenceBetweenOddAndEvenFreq(arr, n);
    cout <<"difference in Frequency : " << Frequency << endl;

    return 0;   
}