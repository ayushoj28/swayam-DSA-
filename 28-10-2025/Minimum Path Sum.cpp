class Solution {
public:
    int ming(int m,int n,int row, int col,vector<vector<int>>& grid , vector<vector<int>>&dp){
        if(row>=m || col>=n) return 1e9;
        if(row==m-1&&col==n-1) return grid[row][col];
        if(dp[row][col]!=-1) return dp[row][col];
        return dp[row][col]= grid[row][col] +min(ming(m,n,row+1,col,grid,dp),ming(m,n,row,col+1,grid,dp));

    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return ming(m,n,0,0,grid,dp);
    }
};
