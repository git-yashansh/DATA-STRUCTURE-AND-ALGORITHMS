class Solution {
private:
    pair<int, int> dfs(TreeNode* node) {
        if (!node) return {0, 0};
        
        pair<int, int> left = dfs(node->left);
        pair<int, int> right = dfs(node->right);
        
        int rob_current = node->val + left.second + right.second;
        int not_rob_current = max(left.first, left.second) + max(right.first, right.second);
        
        return {rob_current, not_rob_current};
    }
    
public:
    int rob(TreeNode* root) {
        pair<int, int> result = dfs(root);
        return max(result.first, result.second);
    }
};