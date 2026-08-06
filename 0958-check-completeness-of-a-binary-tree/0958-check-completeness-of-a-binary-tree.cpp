class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if (!root) return true;
        
        queue<TreeNode*> q;
        q.push(root);
        bool nullNodeFound = false;
        
        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();
            
            if (!curr) {
                nullNodeFound = true;
            } else {
                if (nullNodeFound) return false;
                
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        
        return true;
    }
};