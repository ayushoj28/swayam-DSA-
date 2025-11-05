class Solution {
public:
    int find(int i,int n,vector<int>& nums,vector<int>&dp){
        if(i>=n) return 0;
       // if(i==n-1) return sum;
       if(dp[i]!=-1){
        return dp[i];
       }
        return dp[i]=max(find(i+1,n,nums,dp),nums[i]+find(i+2,n,nums,dp));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
         vector<int>dp(n,-1);
        return find(0,n,nums,dp);
    }
};
