#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n - 1)
            cout << " | ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool sorted = true;
        for (int j = 0; j < (n - 1) - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                sorted = false;
            }
        }

        if (sorted)
            break;
    }
}
int main()
{
    int inputArray[] = {1, 4, 2, 8, 6, 5};
    int n = 6;

    cout << "Before Sorting: " << endl;
    printArray(inputArray, n);

    bubbleSort(inputArray, n);

    cout << "After Sorting: " << endl;
    printArray(inputArray, n);

    return 0;
}
