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

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int prev = i - 1;

        while (prev > 0 && arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = current;
    }
}

int main()
{
    int inputArray[] = {1, 4, 2, 8, 6, 5};
    int n = 6;

    cout << "Before Sorting: " << endl;
    printArray(inputArray, n);

    insertionSort(inputArray, n);

    cout << "After Sorting: " << endl;
    printArray(inputArray, n);

    return 0;
}
