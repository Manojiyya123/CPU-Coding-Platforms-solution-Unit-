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
    int maxDepth(TreeNode* head) {
        if(head==NULL) return 0;// no of nodes on max depth
        int l=maxDepth(head->left);
        int r=maxDepth(head->right);
        if(l>=r) return l+1;
        else return r+1;
        
    }
};