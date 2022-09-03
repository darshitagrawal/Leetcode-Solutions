/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root)
{
    int h_lchild, h_rchild;
    
    if(root == NULL)
    {
        return 0;
    }
    h_lchild = maxDepth(root->left);
    h_rchild = maxDepth(root->right);
    
    if(h_lchild > h_rchild)
    {
        return h_lchild + 1;
    }
    
    return h_rchild + 1;
}