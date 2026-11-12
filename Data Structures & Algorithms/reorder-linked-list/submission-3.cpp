class Solution {
public:
    void reorderList(ListNode* head) {

        ListNode * slow = head , *fast = head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode * prev = nullptr;
        ListNode * curr = slow->next;
        slow->next = nullptr;
        
        while(curr){
            ListNode * nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }  

        ListNode * p1 = head;
        ListNode * p2 = prev;
        
        
        while(p2){
            ListNode * n1 = p1->next;
            ListNode * n2 = p2->next;

            p1->next = p2;
            p2->next = n1;

            p1 = n1;
            p2 = n2;
        }
        return;
    }
};
