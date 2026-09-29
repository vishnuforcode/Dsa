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
ListNode* reverse(ListNode* head){
    if(head == NULL || head->next ==NULL) return head;

        ListNode* temp = head ;
        ListNode* prev = NULL ;

        while(temp != NULL){
            ListNode* sec= temp->next ;

            temp->next = prev ;
            prev = temp ;
            temp = sec ;
        }

        return prev ;
}

    bool isPalindrome(ListNode* head) {
                if(head == NULL ||  head->next ==NULL) return true;

            ListNode* fast = head ;
            ListNode* slow = head ;

            while(fast != NULL && fast->next != NULL){
                fast = fast->next->next ;
                slow = slow->next ;
            }

            ListNode* sechalf = reverse(slow);
            fast = head ;

            while(sechalf != NULL){
                if(sechalf->val != fast->val){
                    return false ;
                }

                sechalf = sechalf->next ;
                fast = fast->next ;
            }

            return true ;
    }
};