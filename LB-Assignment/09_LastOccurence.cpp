#include <iostream>
using namespace std;

int LastOccurence (int arr[], int n, int num){
    int iIndex = -1;
    for (int i = 0; i < n; i++){
        if (arr [i] == num){
            iIndex = i;
        }
    }
    return iIndex;
}

int main (){
    int arr[] = {85, 23, 6, 11, 80, 11, 6, 11};
    int n = 8;
    int num = 6;

    int iOccurence = LastOccurence(arr, n, num);
    cout <<"Last Occurence of 6 : " << iOccurence << endl;

    return 0;
}