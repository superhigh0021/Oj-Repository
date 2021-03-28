/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
        vector<vector<int>> v;
        if (nums.size() < 4)
            return v;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 3; ++i) {
            for (int j = i + 1; j < nums.size() - 2; ++j) {
                int front = j + 1, back = nums.size() - 1;
                while (front < back) {
                    int sum = nums[i] + nums[j] + nums[front] + nums[back];
                    if (sum == target) {
                        vector<int> c = { nums[i], nums[j], nums[front], nums[back] };
                        v.push_back(c);
                        while (front < back && nums[front] == c[2])
                            front++;
                        while (front < back && nums[back] == c[3])
                            back--;
                    } else if (sum < target)
                        front++;
                    else if (sum > target)
                        back--;
                }
                while (nums[j + 1] == nums[j] && j + 1 < nums.size() - 2)
                    ++j;
            }
            while (nums[i + 1] == nums[i] && i + 1 < nums.size() - 1)
                ++i;
        }
        return v;
    }
};
// @lc code=end
