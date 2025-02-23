// Find the length of the longest subarray whose sum is less than or equal to a given value k.

#include <iostream>
#include <vector>
using namespace std;

int maxLengthOfSubarray(vector<int> nums, int k)
{
    int maxLength = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];

            if (sum <= k)
            {
                maxLength = max(maxLength, j - i + 1);
            }
        }
    }

    return maxLength;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 10;

    int result = maxLengthOfSubarray(nums, k);

    cout << "The length of the longest subarray with sum <= " << k << " is: " << result << endl;

    return 0;
}