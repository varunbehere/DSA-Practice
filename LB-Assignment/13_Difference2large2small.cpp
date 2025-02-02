#include <iostream>
using namespace std;

int Difference_Of_2Small_And_2Large (int arr [], int n){
    int firstLarge = max(arr[0], arr[1]);
    int secondLarge = min(arr[0], arr[1]);
    int firstSmall = min(arr[0], arr[1]);
    int secondSmall = max(arr[0], arr[1]);

    for (int i = 0; i < n; i++){
        if (arr [i] > firstLarge){
            secondLarge = firstLarge;
            firstLarge = arr[i];
        } else if (arr [i] > secondLarge && arr[i] != firstLarge ){
            secondLarge = arr[i];
        }

        if (arr [i] < firstSmall){
            secondSmall = firstSmall;
            firstSmall = arr[i];
        } else if (arr [i] < secondSmall && arr [i] != firstSmall){
            secondSmall = arr[i];
        }
    }

    return (secondLarge - secondSmall);
}

int main() {
    int arr[] = {12, 13, 1, 10, 34, 1};
    int n = 6;
    int result = Difference_Of_2Small_And_2Large(arr, n);
    cout << "Difference (Second Large - Second Small): " << result << endl;
    return 0;
}