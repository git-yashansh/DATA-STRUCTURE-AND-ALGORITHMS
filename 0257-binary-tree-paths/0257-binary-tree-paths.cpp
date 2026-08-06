class Solution {
private:	
    void dfs(TreeNode* node, string path, vector<string>& result) {
        if (!node) return;
        
        path += to_string(node->val);
        
        if (!node->left && !node->right) {
            result.push_back(path);
            return;
        }
        
        path += "->";
        if (node->left) dfs(node->left, path, result);
        if (node->right) dfs(node->right, path, result);
    }

public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        dfs(root, "", result);
        return result;
    }
};