class Solution {
public:
      int solveME(vector<int>& nums, int target, int i, vector<vector<int>>& dp) {
        if (i == nums.size())
            return target == 0 ? 1 : 0;

        int shifted_target = target + 1000;
        if (shifted_target < 0 || shifted_target > 2000)
            return 0;
        if (dp[i][shifted_target] != -1)
            return dp[i][shifted_target];

        int plus = solveME(nums, target - nums[i], i + 1, dp);
        int minus = solveME(nums, target + nums[i], i + 1, dp);

        return dp[i][shifted_target] = plus + minus;
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
         vector<vector<int>> dp(nums.size(), vector<int>(2001, -1));
        return solveME(nums, target, 0, dp);
    }
};
