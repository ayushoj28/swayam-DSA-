class Solution {
public:
    void cbsum(int i,int n,vector<int>& candidates,int target,vector<int>&temp,vector<vector<int>>&ans){
        if(target==0){
            ans.push_back(temp);
            return ;
        }
        if (i >= n || target < 0) return; 
        temp.push_back(candidates[i]);
        cbsum(i,n,candidates,target-candidates[i],temp,ans);
         temp.pop_back();
        cbsum(i+1,n,candidates,target,temp,ans);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        cbsum(0,candidates.size(),candidates,target,temp,ans);

        return ans;

    }
};
