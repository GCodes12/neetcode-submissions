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
    Node* copyRandomList(Node* head) {
        
        if(!head) return nullptr;

        Node *curr = head;
        unordered_map<Node* , Node*>mp;

        //create node and put its values;
        while(curr){
            mp[curr] = new Node(curr->val);
            curr = curr->next;
        }

        //connect next and random;

        curr = head;
        while(curr){
            mp[curr]->next = curr->next ? mp[curr->next] : nullptr;
            mp[curr]->random = curr->random ? mp[curr->random] : nullptr;
            curr = curr->next;
        }
        return mp[head];
    }
};





