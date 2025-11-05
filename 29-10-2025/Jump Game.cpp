class Solution {
public:
    void helper(vector<int>& nums, vector<int>& visited, int index, int s) {
        visited[0] = 1;  // Starting index is always reachable
        
        for (int i = 0; i < s; i++) {
            if (visited[i] == 1) {   // Only jump from reachable indices
                int maxJump = nums[i];
                for (int j = 1; j <= maxJump && i + j < s; j++) {
                    visited[i + j] = 1;  // Mark reachable indices
                }
            }
        }
    }

    bool canJump(vector<int>& nums) {
        vector<int> visited(nums.size(), 0);
        int s = nums.size();
        helper(nums, visited, 0, s);
        
        // Check if last index is reachable
        return visited[s - 1] == 1;
    }
};
