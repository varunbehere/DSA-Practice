#include <iostream>
using namespace std;

int FrequencyOf11(int arr[], int n)
{
    int freq = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 11)
        {
            freq++;
        }
    }

    return freq;
}

int main()
{

    int arr[] = {85, 66, 11, 80, 11, 88, 11};
    int n = 7;

    int iFreq = FrequencyOf11(arr, n);
    cout <<"Frequency of 11 : " << iFreq << endl;

    return 0;
}