/**
 * @brief Sorts an array of 0s, 1s, and 2s using the Dutch National Flag algorithm.
 *
 * This function sorts an array containing only the values 0, 1, and 2 in linear time.
 * The Dutch National Flag algorithm, proposed by Edsger W. Dijkstra, partitions the array
 * into three sections: one for 0s, one for 1s, and one for 2s. It does this by maintaining
 * three pointers: low, mid, and high. The low pointer tracks the boundary of the 0s section,
 * the mid pointer traverses the array, and the high pointer tracks the boundary of the 2s section.
 *
 * The algorithm works as follows:
 * 1. Initialize low, mid, and high pointers.
 * 2. Traverse the array with the mid pointer.
 * 3. If the element at mid is 0, swap it with the element at low and increment both low and mid.
 * 4. If the element at mid is 1, simply move the mid pointer to the next element.
 * 5. If the element at mid is 2, swap it with the element at high and decrement the high pointer.
 * 6. Repeat steps 3-5 until mid exceeds high.
 *
 * This algorithm ensures that all 0s are moved to the beginning of the array, all 1s are in the middle,
 * and all 2s are moved to the end, achieving the desired sorted order.
 *
 * @param arr The array to be sorted.
 * @param size The size of the array.
 */

#include <iostream>
using namespace std;

void dutchNationalFlagSort(int arr[], int size)
{
    int low = 0, mid = 0, high = size - 1;

    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            std::swap(arr[low++], arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            std::swap(arr[mid], arr[high--]);
            break;
        }
    }
}

int main()
{
    int arr[] = {2, 0, 2, 1, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    dutchNationalFlagSort(arr, size);

    cout << "Array after sorting: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}