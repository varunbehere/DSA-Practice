#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> returnVector(2, 0);
    unordered_map<int, int> tempMap;

    for (auto num : nums)
    {
        tempMap.insert({num, target - num});
    }

    for (auto element : tempMap)
    {
        if ((element.first + element.second) == target)
        {
            returnVector[0] = element.first;
            returnVector[1] = element.second;
        }
    }

    return returnVector;
}

int main()
{
    vector<int> input = {1, 2, 3, 5, 6};
    vector<int> temp = twoSum(input, 11);

    for (auto num : temp)
    {
        cout << num << endl;
    }
    return 0;
}