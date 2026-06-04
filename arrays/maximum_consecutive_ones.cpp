// Problem: maximum consecutive ones
// Platform: LeetCode
// Difficulty: Easy

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;

        for (int num : nums) {
            if (num == 1) {
                count++;
                if (count > maxCount) {
                    maxCount = count;
                }
            } else {
                count = 0;
            }
        }

        return maxCount;
    }
};

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    Solution obj;
    cout << "Maximum consecutive 1s = "
         << obj.findMaxConsecutiveOnes(nums);

    return 0;
}