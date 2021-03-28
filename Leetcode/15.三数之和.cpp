/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            int front = i + 1, back = nums.size() - 1;
            while (front < back) {
                if (nums[front] + nums[back] + nums[i] < 0)
                    front++;
                else if (nums[front] + nums[back] + nums[i] > 0)
                    back--;
                else {
                    vector<int> v = { nums[i], nums[front], nums[back] };
                    res.push_back(v);
                    while (front < back && nums[front] == v[1])
                        front++;
                    while (front < back && nums[back] == v[2])
                        back--;
                }
            }
            while (i + 1 < nums.size() && nums[i + 1] == nums[i])
                i++;
        }
        return res;
    }
};
// @lc code=end
