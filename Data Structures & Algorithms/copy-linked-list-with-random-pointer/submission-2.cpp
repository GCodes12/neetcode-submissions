/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    // Node* copyRandomList(Node* head) {
        
    //     if(!head) return nullptr;

    //     Node *curr = head;
    //     unordered_map<Node* , Node*>mp;

    //     //create node and put its values;
    //     while(curr){
    //         mp[curr] = new Node(curr->val);
    //         curr = curr->next;
    //     }

    //     //connect next and random;

    //     curr = head;
    //     while(curr){
    //         mp[curr]->next = curr->next ? mp[curr->next] : nullptr;
    //         mp[curr]->random = curr->random ? mp[curr->random] : nullptr;
    //         curr = curr->next;
    //     }
    //     return mp[head];

    Node* copyRandomList(Node* head) {
        
        if(!head) return nullptr;

        Node *curr = head;
        
        //1.copy LL
        while(curr){
            Node *copy = new Node(curr->val);
            copy->next = curr->next;
            curr->next = copy;
            
            curr = copy->next;
        }

        //2.copy random
        curr = head;
        while(curr){
            if(curr->random){
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }

        //3.break LL;
        curr = head;
        Node *dummy = new Node(0);
        Node* cpycurr = dummy;

        while(curr){
            cpycurr ->next = curr->next;
            curr -> next = curr->next->next;

            curr = curr->next;
            cpycurr = cpycurr->next;
        }
        return dummy->next;
    }
};





