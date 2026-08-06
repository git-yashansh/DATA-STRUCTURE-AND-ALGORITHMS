class Solution {
    unordered_map<int, vector<TreeNode*>> memo;
public:
    vector<TreeNode*> allPossibleFBT(int n) {
        if (n % 2 == 0) return {};
        if (n == 1) return {new TreeNode(0)};
        if (memo.count(n)) return memo[n];

        vector<TreeNode*> res;
        for (int i = 1; i < n; i += 2) {	
            vector<TreeNode*> left = allPossibleFBT(i);
            vector<TreeNode*> right = allPossibleFBT(n - 1 - i);

            for (auto l : left) {
                for (auto r : right) {
                    TreeNode* root = new TreeNode(0, l, r);
                    res.push_back(root);
                }
            }
        }
        return memo[n] = res;
    }
};