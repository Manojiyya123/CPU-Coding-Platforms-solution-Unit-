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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> t;
        if(root==NULL) return t;
        queue <TreeNode* > q;
        q.push(root);
        int rev=0;
        while(!q.empty()){
            int s=q.size();
            vector<int>v;
            while(s-- >0){
                root=q.front();
                q.pop();
                if(root->left!=NULL) q.push(root->left);
                if(root->right!=NULL) q.push(root->right);
            }
            t.push_back(root->val);
        }
        return t; 
    }
};