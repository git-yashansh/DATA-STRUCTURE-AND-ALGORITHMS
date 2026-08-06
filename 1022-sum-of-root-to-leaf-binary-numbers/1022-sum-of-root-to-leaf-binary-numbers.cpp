class Solution {
    int dfs(TreeNode* root, int currentSum) {
        if (!root) return 0;
        
        currentSum = (currentSum << 1) | root->val;
        
        if (!root->left && !root->right) {
            return currentSum;
        }
        
        return dfs(root->left, currentSum) + dfs(root->right, currentSum);
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        return dfs(root, 0);
    }
};