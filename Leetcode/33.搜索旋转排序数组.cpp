/*
 * @lc app=leetcode.cn id=33 lang=cpp
 *
 * [33] 搜索旋转排序数组
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        if (!nums.size())
            return -1;
        if (nums.size() == 1)
            return nums[0] == target ? 0 : -1;
        int lo = 0, hi = nums.size() - 1;
        while (lo <= hi) {
            int mi = (lo + hi) >> 1;
            if (nums[mi] == target)
                return mi;
            if (nums[0] <= nums[mi]) {
                if (nums[0] <= target && nums[mi] > target)
                    hi = mi - 1;
                else
                    lo = mi + 1;
            } else {
                if (nums[mi] < target && nums[hi] >= target)
                    lo = mi + 1;
                else
                    hi = mi - 1;
            }
        }
        return -1;
    }
};
// @lc code=end
