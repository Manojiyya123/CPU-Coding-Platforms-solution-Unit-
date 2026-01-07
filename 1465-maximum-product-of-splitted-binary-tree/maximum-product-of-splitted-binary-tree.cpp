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
    unordered_map<TreeNode*, long long> mp;

    long long sumt(TreeNode* r) {
        if (r == NULL) return 0;

        long long left = sumt(r->left);
        long long right = sumt(r->right);

        mp[r] = r->val + left + right;
        return mp[r];
    }

    int maxProduct(TreeNode* root) {
        if (root == NULL) return 0;

        long long tsum = sumt(root);
        long long maxp = 0;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* t = q.front();
            q.pop();
            long long e=0;
            if (t->left) {
                q.push(t->left);
                e = mp[t->left];
                maxp = max(maxp, e * (tsum - e));
            }
            e=0;
            if (t->right) {
                q.push(t->right);
                e = mp[t->right];
                maxp = max(maxp, e * (tsum - e));
            }
        }

        return maxp % 1000000007;
    }
};
