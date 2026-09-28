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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL) return NULL ;

        ListNode* odd_head = head ;
        ListNode* eve_head = head->next ;

        ListNode* odd_ptr = odd_head ;
        ListNode* eve_ptr = eve_head ;

        while(eve_ptr != NULL && eve_ptr->next != NULL){

            odd_ptr->next = eve_ptr->next ;
            odd_ptr = odd_ptr->next ;

            eve_ptr->next = odd_ptr->next ;
            eve_ptr = eve_ptr->next ;
        }

        odd_ptr->next = eve_head;

        return odd_head ;
        
    }
};