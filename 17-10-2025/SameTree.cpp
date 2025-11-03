class Solution {
public:
    bool isSameTree(TreeNode* r1, TreeNode* r2) {
        if(!r1&&!r2)   // here we check if r1 and r2 have no nodes 
        return 1;
          
        if((!r1&&r2)||(r1&&!r2)) // if r1 exists and r2 not and vice versaa 
        return 0;
          
        if(r1->val!=r2->val)  // if r1 current node data miss match with r2 one
        return 0;
          
        return isSameTree(r1->left,r2->left)&&isSameTree(r1->right,r2->right); //then we recursivly apply same for left and right node
    }
};
