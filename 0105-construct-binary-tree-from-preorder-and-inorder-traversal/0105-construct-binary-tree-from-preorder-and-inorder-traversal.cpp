class Solution {
private:
    unordered_map<int, int> inorderMap;
    
    TreeNode* build(vector<int>& preorder, int preStart, int preEnd, int inStart, int inEnd) {
        if (preStart > preEnd || inStart > inEnd) return nullptr;
        
        TreeNode* root = new TreeNode(preorder[preStart]);
        int inRoot = inorderMap[root->val];
        int numsLeft = inRoot - inStart;
        
        root->left = build(preorder, preStart + 1, preStart + numsLeft, inStart, inRoot - 1);
        root->right = build(preorder, preStart + numsLeft + 1, preEnd, inRoot + 1, inEnd);
        
        return root;
    }

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++) {
            inorderMap[inorder[i]] = i;
        }
        return build(preorder, 0, preorder.size() - 1, 0, inorder.size() - 1);
    }
};
