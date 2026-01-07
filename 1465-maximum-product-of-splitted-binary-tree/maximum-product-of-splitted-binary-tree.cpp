/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long totalSum = 0;
    long long ans = 0;
    int M = 1e9 + 7;

    long long dfs(TreeNode* root) {
        if (!root) return 0;
        long long subSum = root->val + dfs(root->left) + dfs(root->right);
        ans = max(ans, subSum * (totalSum - subSum));
        return subSum;
    }

    int maxProduct(TreeNode* root) {
        totalSum = dfs(root);
        dfs(root);
        return ans % M;
    }
};

