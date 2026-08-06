class Solution {
private:
    void getLeafSequence(TreeNode* root, vector<int>& leaves) {
        if (!root) return;
        if (!root->left && !root->right) {
            leaves.push_back(root->val);
            return;
        }
        getLeafSequence(root->left, leaves);
        getLeafSequence(root->right, leaves);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaves1, leaves2;
        getLeafSequence(root1, leaves1);
        getLeafSequence(root2, leaves2);
        return leaves1 == leaves2;
    }
};