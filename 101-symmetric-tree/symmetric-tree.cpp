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
    bool check(vector<int>& a) {
        int l = 0, r = a.size() - 1;
        while(l < r) {
            if(a[l] != a[r]) return false;
            l++; r--;
        }
        return true;
    }
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>a;
            for(int i = 0; i < n; i++) {
                TreeNode* t = q.front(); q.pop();
                if(t == NULL) {
                    a.push_back(101);
                    continue;
                }
                a.push_back(t->val);
                q.push(t->left);
                q.push(t->right);
            }
           if(! check(a)) return false;
        }
        return true;
    }
};