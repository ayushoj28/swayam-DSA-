class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int> dum = arr;
        sort(arr.begin(), arr.end());
        long long dif = 0;
        int count = 0, n = arr.size();
        for(int i=0; i<n; i++){
            dif += (arr[i]-dum[i]);
            count += (dif==0);
        }
        return count;
    }
};
