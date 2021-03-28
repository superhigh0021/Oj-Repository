/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int result = INT_MIN;
        vector<int> dp(nums.size());
        result = dp[0] = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            dp[i] = max(dp[i - 1] + nums[i], nums[i]);
            result = max(result, dp[i]);
        }
        return result;
    }
};
// @lc code=end
