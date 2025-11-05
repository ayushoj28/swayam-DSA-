class Solution {
  public:
    int solve(int row, int col, int n, vector<vector<int>>&mat, vector<vector<int>>&dp){
        if(row < 0 || col >= n  || row >= n) {
            return 0;
        }
        if(dp[row][col] != -1) return dp[row][col];
        int maxi = INT_MIN;
        int top_right = mat[row][col] + solve(row - 1, col + 1, n, mat, dp);
        int right = mat[row][col] + solve(row, col+1, n, mat, dp);
        int down_right = mat[row][col] + solve(row+1, col + 1, n, mat, dp);
        maxi = max(top_right, max(right, down_right));
        return dp[row][col] = maxi;
    }
    int maxGold(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        vector<vector<int>>dp(n, vector<int>(n, -1));
        int j = 0;
        int maxi = INT_MIN;
        for(int i = 0; i < n; i++){
            maxi = max(maxi, solve(i, j, n, mat, dp));
        }
        return maxi;
    }
};
