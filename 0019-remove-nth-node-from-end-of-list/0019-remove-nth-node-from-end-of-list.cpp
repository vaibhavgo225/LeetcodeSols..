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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        auto *temp=head;
        while(temp!=NULL){
            count++;
            temp= temp->next;
        }

         if(n == count) {
            temp = head;
            head = head->next;
            return head;
        }
        int x=0;
        temp=head;
        auto *pre = head;
        while(temp!=NULL){
            if(x==count-n){
                pre->next = temp->next;
                break;
            }

           
            pre=temp;
            temp=temp->next;
            x++;
        }
        return head;
    }
};