class Solution {
public:
    int helper(string& text1, string& text2, int i, int j, vector<vector<int>>& dp) {
        // Base case
        if (i == text1.length() || j == text2.length()) {
            return 0;
        }
        if (dp[i][j] != -1) return dp[i][j];

        if (text1[i] == text2[j]) {
            dp[i][j] = 1 + helper(text1, text2, i + 1, j + 1, dp);
        } else {
            dp[i][j] = max(
                helper(text1, text2, i + 1, j, dp),
                helper(text1, text2, i, j + 1, dp)
            );
        }

        return dp[i][j];
    }

    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return helper(text1, text2, 0, 0, dp);
    }
};
