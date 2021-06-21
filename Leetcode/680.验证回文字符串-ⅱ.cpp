/*
 * @lc app=leetcode.cn id=680 lang=cpp
 *
 * [680] 楠岃瘉鍥炴枃瀛楃涓? 鈪?
 */

// @lc code=start
class Solution
{
public:
    bool validPalindrome(string s)
    {
        int start = 0;
        int num = 0;
        int end = s.size() - 1;
        while (start < end)
        {
            if (s[start] != s[end])
            {
                num++;
                break;
            }
            end--;
            start++;
        }
        if (num == 1)
        {
            num = 0;
            int i = start, j = end - 1;
            while (i < j) //删除end对于的字符
            {
                if (s[i] != s[j])
                {
                    num++;
                    break;
                }
                i++;
                j--;
            }
            i = start + 1;
            j = end;
            while (i < j) //删除start对应的字符
            {
                if (s[i] != s[j])
                {
                    num++;
                    break;
                }
                i++;
                j--;
            }
        }
        if (num == 2) //判断删除后是否是回文串
            return false;
        return true;
    }
};
// @lc code=end
