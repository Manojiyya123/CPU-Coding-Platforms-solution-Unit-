/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 bool check(struct TreeNode* a,struct TreeNode* b){
    if(!a&&!b) return true;
    if(!a||!b) return false;
    return (a->val==b->val) && check(a->left,b->right) && check(a->right,b->left);
 }
bool isSymmetric(struct TreeNode* root) {
    return check(root->left,root->right);
}