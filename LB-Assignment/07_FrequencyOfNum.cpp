#include <iostream>
using namespace std;

int FrequencyOfNum(int arr[], int n, int num)
{
    int freq = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            freq++;
        }
    }

    return freq;
}

int main()
{

    int arr[] = {85, 6, 11, 80, 11, 6, 11};
    int n = 7;
    int num = 6;

    int iFreq = FrequencyOfNum(arr, n, num);
    cout <<"Frequency of 6 : " << iFreq << endl;

    return 0;
}