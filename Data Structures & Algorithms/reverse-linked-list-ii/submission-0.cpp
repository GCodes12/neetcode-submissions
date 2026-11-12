class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(!head || left == right){
            return head;
        }

        ListNode dummy(0);
        dummy.next = head;

        ListNode* t1 = &dummy;

        // 1. Move t1 to left-1
        for(int i = 1; i < left; i++){
            t1 = t1->next;
        }

        // 2. Reverse the list between left and right
        ListNode* pre = t1->next;
        ListNode* curr = pre->next;

        for(int i = 0; i < right - left; i++){
            pre->next = curr->next;
            curr->next = t1->next;
            t1->next = curr;
            curr = pre->next;
        }

        return dummy.next;
    }
};
