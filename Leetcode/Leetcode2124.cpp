#include <iostream>
#include <stack>
using namespace std;

bool checkString(string s)
{
    bool bSeen = false;

    for (char ch : s)
    {
        if (ch == 'b')
        {
            bSeen = true;
        }

        if (ch == 'a' && bSeen)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    bool bRet = checkString("ababb");
    cout << bRet << endl;
    return 0;
}