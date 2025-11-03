void in(TreeNode* root ,vector<int>&ans ){
    if(root==NULL)
        return ;
    
    in(root->left , ans);
    ans.push_back(root->val);
    in(root->right , ans);
    
    
}
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        in(root,ans);
        return ans;
    }
};
