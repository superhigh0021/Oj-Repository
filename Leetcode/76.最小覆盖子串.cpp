/*
 * @lc app=leetcode.cn id=76 lang=cpp
 *
 * [76] 鏈�灏忚鐩栧瓙涓?
 */

// @lc code=start
class Solution {
public:
    string minWindow(string s, string t)
    {
        vector<int> chars(128, 0); //每个字符的个数
        deque<bool> flag(128, false); //存在的标志

        for (auto i : t) {
            flag[i] = true;
            ++chars[i];
        }

        int cnt = 0, l = 0, min_l = 0, min_size = s.size() + 1;
        for (int r = 0; r < s.size(); ++r) {
            if (flag[s[r]])
                //该字符存在
                if (--chars[s[r]] >= 0)
                    ++cnt;

            while (cnt == t.size()) {
                //滑动窗口内的字符串命中了所有t内的字符
                if (r - l + 1 < min_size) {
                    min_size = r - l + 1;
                    min_l = l;
                }

                //因为l将要加了，所以如果此时的l正好命中字符，要把这个退还给chars统计数组中
                if (flag[s[l]] && ++chars[s[l]] > 0)
                    --cnt;
                ++l;
            }
        }
        return min_size > s.size() ? "" : s.substr(min_l, min_size);
    }
};
// @lc code=end
