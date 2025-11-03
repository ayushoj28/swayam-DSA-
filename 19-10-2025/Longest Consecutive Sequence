class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int>st;
        for(int i:nums){
            st.insert(i);
        }
        vector<int>s;
        for(int i:st){
            s.push_back(i);
        }
        int count=0,maxcount=0;
        if (nums.empty()) {
            return 0;
        }
        for(int i=0;i<s.size()-1;i++){
            if(s[i]+1==s[i+1]){
                count++;
            }
            else{
                count=0;
            }
            maxcount=max(count,maxcount);
            

        }
        return maxcount+1;
    }
};
