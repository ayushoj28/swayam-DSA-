class Solution {
public:
    bool isMirror(TreeNode* a, TreeNode* b) {
        if (!a && !b) 
        return true;

        if (!a || !b)
        return false;
        
        return (a->val == b->val) && isMirror(a->left, b->right) && isMirror(a->right, b->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (!root) 
        return true;

        return isMirror(root->left, root->right);
    }
};
