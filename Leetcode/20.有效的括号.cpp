/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括�?
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s)
    {
        bool flag = false;
        stack<char> S;
        for (int i = 0; i < s.size(); ++i) {
            flag = false;
            switch (s[i]) {
            case '(':
                S.push(s[i]);
                break;
            case '[':
                S.push(s[i]);
                break;
            case '{':
                S.push(s[i]);
                break;
            case ')':
                if (S.empty())
                    return flag;
                if (S.top() == '(') {
                    flag = true;
                    S.pop();
                } else
                    return flag;
                break;
            case ']':
                if (S.empty())
                    return flag;
                if (S.top() == '[') {
                    flag = true;
                    S.pop();
                } else
                    return flag;
                break;
            case '}':
                if (S.empty())
                    return flag;
                if (S.top() == '{') {
                    flag = true;
                    S.pop();
                } else
                    return flag;
                break;
            default:
                break;
            }
        }
        if (!S.empty())
            return false;
        return flag;
    }
};
// @lc code=end
