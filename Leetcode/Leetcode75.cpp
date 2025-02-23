#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Time Complexity - O(n) and Space Complexity - O(n)
// void sortColors(vector<int>& nums) {
//     unordered_map <int, int> freqCountingMap;

//     for (int i = 0; i < nums.size(); i++){
//         freqCountingMap[nums[i]]++;
//     }

//     for (int i = 0; i < nums.size(); i++){
//         if (freqCountingMap[0] > 0){
//             nums[i] = 0;
//             freqCountingMap[0]--;
//         }
//         else{
//             if (freqCountingMap[1] > 0){
//                 nums[i] = 1;
//                 freqCountingMap[1]--;
//             }
//             else{
//                 if (freqCountingMap[2] > 0){
//                     nums[i] = 2;
//                     freqCountingMap[2]--;
//                 }
//             }
//         }
//     }
// }

// Better approach -> O(n) time complexity and O(1) Space Complexity
// void sortColors(vector<int>& nums) {
//     int count[3] = {0};

//     for (int i = 0; i< nums.size(); i++){
//         count[nums[i]]++;
//     }

//     int index = 0;
//     for (int i = 0; i < 3; i++){
//         while(count[i] > 0){
//             nums[index] = i;
//             count[i]--;
//             index++;
//         }
//     }
// }

// Best and Optimal Approach - This algorithm is known as DNF (Dutch National Flag Algo)
void sortColors(vector<int> &nums)
{
    int low, mid = 0;
    int high = nums.size() - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}
int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);

    cout << "Sorted colors: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}