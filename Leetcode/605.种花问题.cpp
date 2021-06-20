/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n)
    {
        for (int i = 0; i < size(f); ++i) {
            if (f[i] == 1)
                continue;
            if ((i == 0 || f[i - 1] == 0) && (i == size(f) - 1 || f[i + 1] == 0)) {
                f[i] = 1;
                --n;
            }
        }
        return n <= 0;
    }
};
// @lc code=end
