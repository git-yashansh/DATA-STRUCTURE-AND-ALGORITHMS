class Codec {
public:
    string serialize(TreeNode* root) {
        if (!root) return "";
        string s = "";
        serializeHelper(root, s);
        return s;
    }

    TreeNode* deserialize(string data) {
        if (data.empty()) return NULL;
        stringstream ss(data);
        string val;
        queue<int> q;
        while (getline(ss, val, ',')) {
            q.push(stoi(val));
        }
        return deserializeHelper(q, INT_MIN, INT_MAX);
    }

private:
    void serializeHelper(TreeNode* node, string& s) {
        if (!node) return;
        if (!s.empty()) s += ",";
        s += to_string(node->val);
        serializeHelper(node->left, s);
        serializeHelper(node->right, s);
    }

    TreeNode* deserializeHelper(queue<int>& q, int lower, int upper) {
        if (q.empty()) return NULL;
        int val = q.front();
        if (val < lower || val > upper) return NULL;
        
        q.pop();
        TreeNode* node = new TreeNode(val);
        node->left = deserializeHelper(q, lower, val);
        node->right = deserializeHelper(q, val, upper);
        return node;
    }
};