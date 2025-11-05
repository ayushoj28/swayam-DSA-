class Solution {
public:
    int up(int m,int n, int row,int col,vector<vector<int>>&dp,vector<vector<int>>& obstacleGrid){
        if(row>=m || col>=n) return 0;
        if(obstacleGrid[row][col]==1) return 0;
        if(row==m-1&&col==n-1) return 1;
        if(dp[row][col]!=-1) return dp[row][col];
        return dp[row][col]=up(m,n,row+1,col,dp,obstacleGrid)+up(m,n,row,col+1,dp,obstacleGrid);
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return up(m,n,0,0,dp,obstacleGrid);
    }
};
