class Solution {
public:
    int getMin(vector<int>& coins, int n, int val, vector<int>& dp) 
    { 
        if (val == 0) return 0; 
        if (val < 0) return INT_MAX;
        
        if (dp[val] != -1) return dp[val];

        int res = INT_MAX;

        for (int i = 0; i < n; i++) 
        { 
            int sub_res = getMin(coins, n, val - coins[i], dp); 
            if (sub_res != INT_MAX) 
                res = min(res, sub_res + 1); 
        } 
        return dp[val] = res; 
    }

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<int> dp(amount + 1, -1);
        int ans = getMin(coins, n, amount, dp);
        return (ans == INT_MAX) ? -1 : ans; 
    }
};
