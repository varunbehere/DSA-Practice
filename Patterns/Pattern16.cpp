#include <iostream>
using namespace std;

void PrintPattern(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++, ch++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
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