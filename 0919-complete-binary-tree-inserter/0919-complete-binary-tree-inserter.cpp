class CBTInserter {
private:
    TreeNode* rootNode;
    queue<TreeNode*> q;

public:
    CBTInserter(TreeNode* root) {
        rootNode = root;
        queue<TreeNode*> tempQ;
        tempQ.push(root);
        
        while (!tempQ.empty()) {
            TreeNode* curr = tempQ.front();
            tempQ.pop();
            
            if (curr->left) tempQ.push(curr->left);
            if (curr->right) tempQ.push(curr->right);
            
            if (!curr->left || !curr->right) {
                q.push(curr);
            }
        }
    }
    
    int insert(int val) {
        TreeNode* newNode = new TreeNode(val);
        TreeNode* parent = q.front();
        
        if (!parent->left) {
            parent->left = newNode;
        } else {
            parent->right = newNode;
            q.pop();
        }
        
        q.push(newNode);
        return parent->val;
    }
    
    TreeNode* get_root() {
        return rootNode;
    }
};