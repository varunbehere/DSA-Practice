#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// bool check(vector<int> nums) // this would work in O(n2)
// {
//     vector<int> sortedVector = nums;
//     sort(sortedVector.begin(), sortedVector.end());

//     for (int i = 0; i < nums.size(); i++)
//     {
//         vector<int> rotatedVector(nums.size());
//         for (int j = 0; j < sortedVector.size(); j++)
//         {
//             rotatedVector[j] = sortedVector[(j + i) % nums.size()];
//         }

//         if (rotatedVector == nums)
//         {
//             return true;
//         }
//     }

//     return false;
// }

bool check(vector<int> nums) // this would work in O(n)
{
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > nums[(i + 1) % nums.size()])
        {
            count++;
        }
        if (count > 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    bool bRet = check({3, 4, 5, 1, 2});
    cout << "Result: " << bRet << endl;
    return 0;
}