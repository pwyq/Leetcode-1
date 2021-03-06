class Solution {
public:
    int findBottomLeftValue(TreeNode *root) {
        vector<int> result;
        dfs(result, root, 0);
        return result.back();
    }
    
private:
    void dfs(vector<int> &result, TreeNode *root, int level) {
        if (!root)
            return;
        if (result.size() == level)
            result.push_back(root->val);
        dfs(result, root->left, level + 1);
        dfs(result, root->right, level + 1);
    }
};