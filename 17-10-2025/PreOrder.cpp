void pre(TreeNode* root ,vector<int>&ans ){
    if(root==NULL)
        return ;
    
    ans.push_back(root->val);
    pre(root->left , ans);
    pre(root->right , ans);
    
    
}
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        pre(root,ans);
        return ans;
    }
};
