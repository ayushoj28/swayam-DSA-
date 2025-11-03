class Solution {
    int help(TreeNode* root, int& diameter) {
        if (root == NULL) return 0;                         
        int left = help(root->left, diameter);            
        int right = help(root->right, diameter);         
        diameter = max(diameter, left + right);          
        return max(left, right) + 1;                   
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        help(root, diameter);                      
        return diameter;                          
    }
};
