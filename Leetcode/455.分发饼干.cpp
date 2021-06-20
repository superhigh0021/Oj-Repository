/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& c, vector<int>& b) {
        sort(c.begin(), c.end());
        sort(b.begin(), b.end());
        int child = 0, bis = 0;
        while (child < c.size() && bis < b.size()) {
            if (c[child] <= b[bis]) {
                ++child;
                ++bis;
            } else
                ++bis;
        }
        return child;
    }
};
// @lc code=end

