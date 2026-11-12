/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    // int maxDepth(TreeNode* root) {
    //     if(root == nullptr) return 0;

    //     int leftHeight = maxDepth(root->left);

    //     int rightHeight = maxDepth(root->right);

    //     return 1 + max(leftHeight, rightHeight);
    // }

    int maxDepth(TreeNode* root) {
        int depth = 0;
        if(root == nullptr) return depth;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            depth++;
            int n = q.size();
            for(int i=0; i<n; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
    return depth;
    }
};
