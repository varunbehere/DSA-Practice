// Find the length of the longest subarray whose sum is less than or equal to a given value k.
// Using two pointer along with sliding window

#include <iostream>
#include <vector>
using namespace std;

int maxLengthOfSubarray(vector<int> nums, int k)
{
    int maxLength = 0;
    int left = 0;
    int currentSum = 0;

    for (int right = 0; right < nums.size(); right++)
    {
        currentSum += nums[right];

        while (currentSum > k && left <= right)
        {
            currentSum -= nums[left];
            left++;
        }

        if (currentSum <= k)
        {
            maxLength = max(maxLength, right - left + 1);
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