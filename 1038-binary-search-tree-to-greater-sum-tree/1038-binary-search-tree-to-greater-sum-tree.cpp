class Solution {
private:
    int sum = 0;

    void reverseInorder(TreeNode* node) {
        if (!node) return;
        reverseInorder(node->right);
        sum += node->val;
        node->val = sum;
        reverseInorder(node->left);
    }

public:
    TreeNode* bstToGst(TreeNode* root) {
        sum = 0;
        reverseInorder(root);
        return root;
    }
};