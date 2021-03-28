/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容�?
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height)
{
    int S = 0, maxS = 0;
    int i = 0, j = height.size() - 1;
    while (i < j) {
        S = min(height[i], height[j]) * (j - i);
        maxS = max(maxS, S);
        if (height[i] > height[j])
            --j;
        else ++i;
    }
    return maxS;
}
};
// @lc code=end
