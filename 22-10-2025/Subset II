class Solution {
  public:
    void helper(int index, vector<int>& arr, vector<int>& current, vector<vector<int>>& result) {
        result.push_back(current);

        for (int i = index; i < arr.size(); i++) {
            // Skip duplicate elements
            if (i > index && arr[i] == arr[i - 1]) continue;

            current.push_back(arr[i]);
            helper(i + 1, arr, current, result);
            current.pop_back();
        }
    }

    vector<vector<int>> findSubsets(vector<int>& arr) {
        sort(arr.begin(), arr.end()); // Sort to group duplicates together
        vector<vector<int>> result;
        vector<int> current;
        helper(0, arr, current, result);
        return result;
    }
};
