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
    TreeNode* g=NULL;
    int md=0;
    int dfs(TreeNode*root,int d){
        if(root==NULL) return 0;
        d++;
        md=d>md?d:md;
        int l=dfs(root->left,d);
        int r=dfs(root->right,d);
        int m=l>r?l:r;
        if(d+m==md&&l==r)g=root;
        return m+1;
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        if(root==NULL) return root;
        dfs(root,0);
        /*queue <TreeNode*> q;
        q.push(root);
        TreeNode * deep=root;
        while(!q.empty()){
            int s=q.size()
            TreeNode* t=q.front();
            q.pop();
            if(t->left){
                q.push(t->left);
                deep=t;
            }
            if(t->right){
                q.push(t->right);
                deep=t;
            }
        }
        if(deep->left&&deep->right||!deep->left&&!deep->right);
        else if(deep->left) deep=deep->left;
        else deep=deep->right;*/
        return g;
    }
};