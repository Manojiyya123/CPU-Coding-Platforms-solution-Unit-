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
   int inot(TreeNode *p,TreeNode *q){
        if(p==NULL&&q==NULL) return 1;
        else if(p==NULL||q==NULL) return 0;
        if(p->val==q->val){
            int b=inot(p->left,q->left);
            int s=inot(p->right,q->right);
            return s*b;
        }
        return 0;
    } 
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int b= inot(p,q);
        return b;
    }
    
};