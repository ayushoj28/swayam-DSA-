void post(TreeNode* root ,vector<int>&ans ){
    if(root==NULL)
        return ;
    
    post(root->left , ans);
    post(root->right , ans);
    ans.push_back(root->val);
    
    
}
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
       vector<int>ans;
       post(root,ans);
       return ans; 
    }
};
