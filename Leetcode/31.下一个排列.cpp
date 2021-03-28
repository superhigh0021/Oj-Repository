/*
 * @lc app=leetcode.cn id=31 lang=cpp
 *
 * [31] 下一个排�?
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums)
    {
        int i, k;
        for (i = nums.size() - 2; i >= 0; --i)
            if (nums[i] < nums[i + 1])
                break;
        if (i < 0)
            reverse(nums.begin(), nums.end());
        else {
            for (k = nums.size() - 1; k > i; --k)
                if (nums[k] > nums[i])
                    break;
            swap(nums[i], nums[k]);
            reverse(nums.begin() + i + 1, nums.end());
        }
    }
};
// @lc code=end
