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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode();
        ListNode* act = res;
        int carry = 0;
        int v1 = 0;
        int v2 = 0;

        while (l1 != nullptr || l2 != nullptr || carry) {
            v1 = (l1 != nullptr) ? l1->val : 0;
            v2 = (l2 != nullptr) ? l2->val : 0;

            int total = v1 + v2 + carry;

            if (total > 9) {
                total = total % 10;
                carry = 1;
            } else {
                carry = 0;
            }

            act->val = total;

            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;

            act->next = (l1 || l2 || carry) ? new ListNode() : nullptr;
            act = act->next;
        }
        return res;
    }
};