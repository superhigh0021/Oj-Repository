/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int i = 0, j = nums.size() - 1, sum;
        while (i < j) {
            sum = nums[i] + nums[j];
            if (sum == target)
                break;
            else if (sum > target)
                --j;
            else
                ++i;
        }
        return { i + 1, j + 1 };
    }
};
// @lc code=end
