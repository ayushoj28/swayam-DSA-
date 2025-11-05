class Solution {
public:
    int ways(int index , int n, int amount , vector<int>&coins,vector<vector<int>>&dp){
        if(amount==0){
            return 1;
        }
        if(index>=n|| amount<0) return 0;
        if(dp[index][amount]!=-1) return dp[index][amount];
        return  dp[index][amount]=ways(index,n,amount-coins[index],coins,dp)+ways(index+1,n,amount,coins,dp);
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n+1, vector<int>(amount+1, -1));

        
       return ways(0,n,amount,coins,dp);
    }
};
