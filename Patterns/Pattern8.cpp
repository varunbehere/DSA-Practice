#include <iostream>
using namespace std;

void PrintPattern(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "_ ";
        }
        for (int j = 1; j < 2 * i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "_ ";
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