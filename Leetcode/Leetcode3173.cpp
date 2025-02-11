#include <iostream>
#include <string>
using namespace std;

string clearDigits(string s)
{
    string newstr;

    for (char ch : s)
    {
        if (isdigit(ch))
        {
            if (!newstr.empty())
            {
                newstr.pop_back();
            }
        }
        else
        {
            newstr.push_back(ch);
        }
    }

    return newstr;
}

int main()
{

    string str = clearDigits("string124return");
    cout << str;
}