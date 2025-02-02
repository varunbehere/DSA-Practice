#include <iostream>
using namespace std;

int FirstOccurence (int arr[], int n, int num){
    for (int i = 0; i < n; i++){
        if (arr [i] == num){
            return i;
        }
    }
    return -1;
}

int main (){
    int arr[] = {85, 23, 6, 11, 80, 11, 6, 11};
    int n = 8;
    int num = 6;

    int iOccurence = FirstOccurence(arr, n, num);
    cout <<"First Occurence of 6 : " << iOccurence << endl;

    return 0;
}