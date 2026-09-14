/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> refs;
        ListNode *act = head;

        while (act != nullptr) {
            auto [it, success] = refs.insert(act);
            if (!success) return act;
            act = act->next;
        }

        return nullptr;
    }
};