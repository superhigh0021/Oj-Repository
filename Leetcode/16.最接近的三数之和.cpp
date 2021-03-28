/*
 * @lc app=leetcode.cn id=16 lang=cpp
 *
 * [16] 最接近的三数之�?
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        sort(nums.begin(), nums.end());
        int Sum = 0,MinDistance = INT_MAX;
        for (int i = 0; i < nums.size(); ++i) {
            int front = i + 1, back = nums.size() - 1,sum = 0;
            while (front < back) {
                sum = nums[front] + nums[back] + nums[i];
                int distance = abs(sum - target);
                if (distance < MinDistance) {
                    MinDistance = distance;
                    Sum = sum;
                }
                if (sum > target)
                    --back;
                if (sum < target)
                    ++front;
                if (sum == target)
                    return sum;
            }
        }
        return Sum;
    }
};
// @lc code=end
