class Solution {
public:
    void generateSubsets(vector<int>& nums, int n, int index, vector<int>& temp, vector<vector<int>>& ans) {
    if (index == n) {
        ans.push_back(temp);
        return;
    }
    
    // Exclude current element
    generateSubsets(nums, n, index + 1, temp, ans);

    // Include current element
    temp.push_back(nums[index]);
    generateSubsets(nums, n, index + 1, temp, ans);
    
    // Backtrack
    temp.pop_back();
}


   vector<vector<int>>subsets(vector< int>& nums){
    vector<vector<int>> ans;
    vector<int> temp;
    generateSubsets(nums, nums.size(), 0, temp, ans);
    return ans;
   }
};
