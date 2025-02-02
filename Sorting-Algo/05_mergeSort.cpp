#include <iostream>
using namespace std;

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "|" << arr[i];
    }
    cout << "|" << endl;
}

void combine(int arr[], int low, int mid, int high)
{
    int size = high - low + 1;
    int tempArr[size];
    int left = low, right = mid + 1;
    int k = 0;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            tempArr[k++] = arr[left++];
        }
        else
        {
            tempArr[k++] = arr[right++];
        }
    }

    while (left <= mid)
    {
        tempArr[k++] = arr[left++];
    }

    while (right <= high)
    {
        tempArr[k++] = arr[right++];
    }

    for (int i = 0; i < size; i++)
    {
        arr[low + i] = tempArr[i];
    }   
}

void mergeSort(int arr[], int low, int high)
{
    int mid = (low + high) / 2;

    if (low >= high)
        return;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    combine(arr, low, mid, high);
}

int main()
{
    int arr[] = {5, 2, 7, 3, 1, 6, 9};
    int n = 7;

    cout << "Before Sorting: " << endl;
    PrintArray(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "After Sorting: " << endl;
    PrintArray(arr, n);

    return 0;
}