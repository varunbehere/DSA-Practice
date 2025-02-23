// Two sum on sorted arrays

#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int first = 0, last = numbers.size() - 1;

    while (first <= last)
    {
        int sum = numbers[first] + numbers[last];

        if (sum == target)
        {
            return {first, last};
        }
        else if (sum > target)
        {
            last--;
        }
        else
        {
            first++;
        }
    }
    return {};
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