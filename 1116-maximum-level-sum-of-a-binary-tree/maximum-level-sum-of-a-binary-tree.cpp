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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL) return 0;
        queue<TreeNode*>q;
        int s=0,m=root->val;
        int l=1,ml=1;
        q.push(root);
        while(!q.empty()){
           int c=q.size();s=0;
            for(int i=0;i<c;i++){
                TreeNode* t=q.front(); 
                s+=t->val;
                q.pop();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
           if(s>m){
            m=s;ml=l;
           }
           l++;
        }
        return ml;
    }
};