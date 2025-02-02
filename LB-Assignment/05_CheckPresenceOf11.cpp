#include <iostream>
using namespace std;

int CheckPresenceOf11(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 11)
        {
            return true;
        }
    }

    return false;
}

int main()
{

    int arr[] = {85, 66, 11, 80, 93, 88, 90};
    int n = 7;

    bool bRet = CheckPresenceOf11(arr, n);
    if (bRet) {cout << "11 is present"<<endl;}
    else {cout << "11 is not present"<<endl;}
    return 0;
}