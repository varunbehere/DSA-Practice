#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[j] != nums[i])
        {
            j++;
            nums[j] = nums[i];
        }
    }

    return j + 1;
}

int main()
{
    // Test input
    vector<int> nums = {1, 1, 2, 3, 3, 4};

    // Call the function to remove duplicates
    int newLength = removeDuplicates(nums);

    // Output the result
    cout << "Number of unique elements: " << newLength << endl;

    // Print the modified array
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}