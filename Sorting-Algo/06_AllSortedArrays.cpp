#include <iostream>
using namespace std;

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " | " << arr[i];
    }
    cout << " |" << endl;
}

void BubbleSort(int arr[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j <= (n - 1) - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int smallestIndex = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[smallestIndex])
            {
                smallestIndex = j;
            }
        }
        swap(arr[i], arr[smallestIndex]);
    }
}

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
    }
}

void CombineMergeSort(int arr[], int low, int mid, int high)
{
    int size = high - low + 1;
    int temp[size];
    int left = low;
    int right = mid + 1;
    int k = 0;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp[k++] = arr[left++];
        }
        else
        {
            temp[k++] = arr[right++];
        }
    }

    while (left <= mid)
    {
        temp[k++] = arr[left++];
    }

    while (right <= high)
    {
        temp[k++] = arr[right++];
    }

    for (int i = 0; i < size; i++)
    {
        arr[low + i] = temp[i];
    }
}

void MergeSort(int arr[], int low, int high)
{
    if (low >= high)
        return;

    int mid = (low + high) / 2;

    MergeSort(arr, low, mid);
    MergeSort(arr, mid + 1, high);

    CombineMergeSort(arr, low, mid, high);
}

int main()
{

    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = 6;

    cout << "Unsorted Array : ";
    PrintArray(arr, n);

    MergeSort(arr, 0, n - 1);

    cout << "Sorted Array   : ";
    PrintArray(arr, n);

    return 0;
}