/*
 * @lc app=leetcode.cn id=763 lang=cpp
 *
 * [763] 划分字母区间
 */

// @lc code=start
class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        vector<int> last(26);
        for (int i = 0; i < s.size(); ++i)
            last[s[i] - 'a'] = i;
        vector<int> v;
        int start = 0, end = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            end = max(end, last[s[i] - 'a']);
            if (i == end)
            {
                v.push_back(end - start + 1);
                start = i + 1;
            }
        }
        return v;
    }
};
// @lc code=end
