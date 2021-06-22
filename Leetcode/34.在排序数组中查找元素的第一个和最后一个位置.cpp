/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位�?
 */

// @lc code=start
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {

        if (find(nums.begin(), nums.end(), target) == nums.end())
            return {-1, -1};
        int i = 0, j = nums.size() - 1;
        for (; i < nums.size(); ++i)
            if (nums[i] == target)
                break;
        for (; j >= i; --j)
            if (nums[j] == target)
                break;
        return {i, j};
    }
};
// @lc code=end
