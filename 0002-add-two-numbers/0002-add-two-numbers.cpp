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
        auto* temp1 = l1;
        auto* temp2 = l2;
        int carry = 0;
        ListNode* l3 = new ListNode();
        auto* head = l3;
        while (temp1 != NULL || temp2 != NULL || carry != 0) {
            int x = 0;
            int y = 0;

            if (temp1 != NULL)
                x = temp1->val;

            if (temp2 != NULL)
                y = temp2->val;
            int sum = x + y + carry;
            carry = 0;
            int digit = sum % 10;
            carry = sum / 10;

            head->val = digit;
            if(temp1 != NULL)
                temp1 = temp1->next;

            if(temp2 != NULL)
                temp2 = temp2->next;

            if(temp1 != NULL || temp2 != NULL || carry != 0) {
                head->next = new ListNode();
                head = head->next;
            }
        }
        return l3;
    }
};