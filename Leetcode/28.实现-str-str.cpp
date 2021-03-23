/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle)
    {
        if (needle.size() == 0)
            return 0;
        if (needle.size() > haystack.size())
            return -1;
        int flag;
        bool flag2 = false;
        for (int i = 0; i < haystack.size(); ++i) {
            if (haystack[i] == needle[0]) {
                flag = i;
                if (needle.size() > 1)
                    for (int j = 1; j < needle.size();) {
                        if (i + j < haystack.size()) {
                            if (haystack[i + j] == needle[j]) {
                                ++j;
                                flag2 = true;
                            } else {
                                flag2 = false;
                                break;
                            }
                        } else {
                            flag2 = false;
                            break;
                        }
                    }
                else
                    return flag;
                if (flag2 == true)
                    return flag;
            }
        }
        return -1;
    }
};
// @lc code=end
