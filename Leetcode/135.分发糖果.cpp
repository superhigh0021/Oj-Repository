/*
 * @lc app=leetcode.cn id=135 lang=cpp
 *
 * [135] 分发糖果
 */

// @lc code=start
class Solution {
public:
    int candy(vector<int>& r)
    {
        vector<int> v(r.size());
        for (auto& c : v)
            c = 1;
        for (int i = 0; i < r.size() - 1; ++i) {
            if (r[i + 1] > r[i])
                v[i + 1] = v[i] + 1;
        }
        for (int i = r.size() - 1; i > 0; --i) {
            if (r[i - 1] > r[i] && v[i - 1] <= v[i])
                v[i - 1]=v[i]+1;
        }
        return accumulate(v.begin(), v.end(), 0);
    }
};
// @lc code=end
