/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时�? II
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &p)
    {
        int profit=0;
        for(int i=0;i<p.size()-1;++i){
            if(p[i+1]>p[i])
            profit+=(p[i+1]-p[i]);
        }
        return profit;
    }
};
// @lc code=end
