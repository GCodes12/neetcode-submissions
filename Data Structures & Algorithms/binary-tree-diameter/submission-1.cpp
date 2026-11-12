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

    int maxDiameter = 0;

    int calculateHeight(TreeNode* root) {
        if (root == nullptr) return 0;

        // Get heights of subtrees
        int leftH = calculateHeight(root->left);
        int rightH = calculateHeight(root->right);

        // Update the global maximum diameter found so far
        // Diameter at this node = left height + right height
        maxDiameter = max(maxDiameter, leftH + rightH);

        // Return the height of this node to the parent
        return 1 + max(leftH, rightH);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        maxDiameter = 0; // Reset for each call
        calculateHeight(root);
        return maxDiameter;
    }
};
