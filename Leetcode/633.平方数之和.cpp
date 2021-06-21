/*
 * @lc app=leetcode.cn id=633 lang=cpp
 *
 * [633] 平方数之�?
 */

// @lc code=start
class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        
        long i = 0, j = (int)sqrt(c);
        while (i <= j)
        {
            long sum = pow(i, 2) + pow(j, 2);
            if (sum == c)
            {
                return true;
            }
            else if (sum < c)
                ++i;
            else
                --j;
        }
        return false;
    }
};
// @lc code=end
