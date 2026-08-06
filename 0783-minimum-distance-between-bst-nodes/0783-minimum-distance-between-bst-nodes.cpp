class Solution {
private:
    void inorder(TreeNode* root, int& prev, int& min_diff) {
        if (!root) return;
        inorder(root->left, prev, min_diff);
        if (prev != -1) {
            min_diff = min(min_diff, root->val - prev);
        }
        prev = root->val;
        inorder(root->right, prev, min_diff);
    }
public:
    int minDiffInBST(TreeNode* root) {
        int min_diff = INT_MAX;
        int prev = -1;
        inorder(root, prev, min_diff);
        return min_diff;
    }
};