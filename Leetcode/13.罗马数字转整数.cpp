/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整�?
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s)
    {
        int cnt, sum = 0;
        for (int i = 0; i < s.size(); ++i) {
            switch (s[i]) {
            case 'I':
                cnt = 1;
                break;
            case 'V':
                cnt = 5;
                break;
            case 'X':
                cnt = 10;
                break;
            case 'L':
                cnt = 50;
                break;
            case 'C':
                cnt = 100;
                break;
            case 'D':
                cnt = 500;
                break;
            case 'M':
                cnt = 1000;
                break;
            default:
                break;
            }
            if (i + 1 != s.size()) {
                if (s[i] == 'I' && s[i + 1] == 'V') {
                    cnt = 4;
                    i++;
                }
                if (s[i] == 'I' && s[i + 1] == 'X') {
                    cnt = 9;
                    i++;
                }
                if (s[i] == 'X' && s[i + 1] == 'L') {
                    cnt = 40;
                    i++;
                }
                if (s[i] == 'X' && s[i + 1] == 'C') {
                    cnt = 90;
                    i++;
                }
                if (s[i] == 'C' && s[i + 1] == 'D') {
                    cnt = 400;
                    i++;
                }
                if (s[i] == 'C' && s[i + 1] == 'M') {
                    cnt = 900;
                    i++;
                }
            }
            sum += cnt;
        }
        return sum;
    }
};
// @lc code=end
