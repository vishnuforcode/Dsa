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

    ListNode* reverse(ListNode*& head){
        if(head == NULL || head->next == NULL){
            return head ;
        }

        ListNode* newHead = reverse(head->next);
        head->next->next = head ;
        head->next = NULL ;


        return newHead ;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry = 0 ;
         ListNode* head = NULL ;

        while(l1 != NULL || l2 != NULL || carry){
            int x = l1? l1->val : 0 ;
            int y = l2? l2->val : 0 ;

            int sum = x + y+ carry ;

            carry = sum / 10 ;

            ListNode* newNode = new ListNode(sum % 10);
            newNode->next = head;
            head = newNode ;


            if(l1) l1 = l1->next ;
            if(l2) l2 = l2->next ;
        }

        return reverse(head) ;
    }
};