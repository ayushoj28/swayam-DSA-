class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int,vector<int>,greater<int>>m;
        for(int i=0;i<k;i++){
            m.push(nums[i]);
        }
        for(int i=k;i<n;i++){
            if(m.top()<nums[i]){
                m.pop();
                m.push(nums[i]);
            }
        }
        return m.top();
    }
};
