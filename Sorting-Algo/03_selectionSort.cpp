#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " | ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int smallestIndex = i;
        for (int j = i + 1; j < n; j++)
        {   
            if (arr[j] < arr[smallestIndex]){
                smallestIndex = j;
            }
        }
        
        swap(arr[i], arr[smallestIndex]);
    }
}

int main()
{
    int inputArray[] = {1, 4, 2, 8, 6, 5};
    int n = 6;

    cout << "Before Sorting: " << endl;
    printArray(inputArray, n);

    selectionSort(inputArray, n);

    cout << "After Sorting: " << endl;
    printArray(inputArray, n);

    return 0;
}
