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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode();
        auto* temp1 = list1;
        auto* temp2 = list2;
        auto* head = ans;

        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;

        while (temp1 != NULL && temp2 != NULL) {
            if (temp1->val <= temp2->val) {
                head->val = temp1->val;
                temp1 = temp1->next;
            } else if (temp1->val > temp2->val) {
                head->val = temp2->val;
                temp2 = temp2->next;
            }
            if (temp1 == NULL) {
                head->next = temp2;
                break;
            }
            if (temp2 == NULL) {
                head->next = temp1;
                break;
            }
            head->next = new ListNode();
            head = head->next;
        }
        return ans;
    }
};