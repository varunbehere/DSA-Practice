#include <iostream>
using namespace std;

void PrintPattern(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++, ch++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "_ ";
        }

        char ch = 'A';
        for (int j = 1; j < 2 * i; j++)
        {
            if (j >= i)
            {
                cout << ch << " ";
                ch--;
            }
            else
            {
                cout << ch << " ";
                ch++;
            }
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
    int n = 3;

    PrintPattern(n);
    return 0;
}