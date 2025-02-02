#include <iostream>
using namespace std;

void PrintPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {   
        for (char ch = ('A' + n - 1) - (i -1); ch <= 'A' + n - 1; ch++)
        {
            cout << ch;
        }

        cout << endl;
    }
}

int main()
{
    int n = 5;

    PrintPattern(n);
    return 0;
}