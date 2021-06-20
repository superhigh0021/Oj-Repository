/*
 * @lc app=leetcode.cn id=452 lang=cpp
 *
 * [452] 用最少数量的箭引爆气�?
 */

// @lc code=start
class Solution
{
public:
    int findMinArrowShots(vector<vector<int>> &p)
    {
        if (p.size() == 0)
            return 0;
        int total = 1;
        sort(p.begin(), p.end(), [](vector<int> a, vector<int> b)
             { return a[1] < b[1]; });
        int target=p[0][1];
        for(auto i:p){
            if(i[0]>target){
                target=i[1];
                total++;
            }
        }
        return total;
    }
};
// @lc code=end
