/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* l = new ListNode;
        ListNode* s = l;
        int carry = 0;
        while (l1 || l2) {
            if (l1 && l2) {
                if (l1->val + l2->val + carry >= 10)
                    l->val = l1->val + l2->val - 10 + carry;
                else {
                    l->val = l1->val + l2->val + carry;
                    carry = 0;
                }
                if (l1->val + l2->val >= 10)
                    carry = 1;
                l1 = l1->next;
                l2 = l2->next;
            } else if (l1 && !l2) {
                if (l1->val + carry >= 10) {
                    l->val = l1->val + carry - 10;
                    carry = 1;
                } else {
                    l->val = l1->val + carry;
                    carry = 0;
                }
                l1 = l1->next;
            } else if (!l1 && l2) {
                if (l2->val + carry >= 10) {
                    l->val = l2->val + carry - 10;
                    carry = 1;
                } else {
                    l->val = l2->val + carry;
                    carry = 0;
                }
                l2 = l2->next;
            }
            if (l1 || l2 || carry != 0) {
                l->next = new ListNode;
                l = l->next;
                if (!l1 && !l2) {
                    l->val = carry;
                    break;
                }
            }
        }
        return s;
    }
};
// @lc code=end
