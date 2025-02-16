#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countWords(vector<string> &words1, vector<string> &words2)
{
    unordered_map<string, int> map1, map2;
    int count = 0;

    for (int i = 0; i < words1.size(); i++)
    {
        map1[words1[i]]++;
    }
    for (int i = 0; i < words2.size(); i++)
    {
        map2[words2[i]]++;
    }

    for (auto key : map1)
    {
        if (key.second == 1 && map2[key.first] == 1)
        {
            ++count;
        }
    }
    return count;
}

int main()
{
    vector<string> words1 = {"apple", "banana", "orange", "apple"};
    vector<string> words2 = {"banana", "orange", "grape", "grape"};

    int result = countWords(words1, words2);
    cout << "Count of common unique words: " << result << endl;

    return 0;
}
