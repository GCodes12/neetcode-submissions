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
    void reorderList(ListNode* head) {
        ListNode *slow = head , *fast = head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *curr = slow->next;
        slow-> next = nullptr;
        ListNode *prev = nullptr;

        while(curr){
            ListNode *nextNode = curr->next;
            curr -> next = prev;
            prev = curr;
            curr = nextNode;    
        }

        ListNode *left = head;
        ListNode *right = prev;

        while(right){
            ListNode *leftNext = left -> next;
            ListNode *rightNext = right -> next;

            left -> next = right;
            right -> next = leftNext;

            left = leftNext;
            right = rightNext;
            
        }
        if(left) left-> next = NULL;
    }
};
