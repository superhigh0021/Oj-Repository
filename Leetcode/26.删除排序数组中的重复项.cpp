/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复�?
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        if (nums.size() == 0)
            return 0;
        int cnt = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            if (cnt == nums[i])
                nums[i] = 100000;
            else
                cnt = nums[i];
        }
        nums.erase(remove(nums.begin(), nums.end(), 100000), nums.end());
        return nums.size();
    }
};
// @lc code=end
