/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        if (nums1.size() < nums2.size())
            swap(nums1, nums2);
        vector<int> v;
        int j = 0;
        for (int i = 0; i < nums1.size();) {
            if (j < nums2.size())
                for (; j < nums2.size();) {
                    if (nums1[i] <= nums2[j]) {
                        v.push_back(nums1[i]);
                        ++i;
                        break;
                    } else {
                        v.push_back(nums2[j]);
                        ++j;
                    }
                }
            else
                v.push_back(nums1[i++]);
        }
        while (j < nums2.size())
            v.push_back(nums2[j++]);
        // for (auto i : v)
        //     cout << i << ' ';
        if (v.size() % 2 == 0)
            return (v[v.size() / 2 - 1] + (double)v[v.size() / 2]) / 2;
        else
            return (double)v[v.size() / 2];
    }
};
// @lc code=end
