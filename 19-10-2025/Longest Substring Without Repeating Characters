class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;
        int start=0,end=0;
        int n=s.size();
        int count=0;
        while(end<n){
            m[s[end]]++;
             while(m[s[end]]!=1){
                
                m[s[start]]--;
                start++;
            }
            count=max(count,end-start+1);
            end++;

        }
        return count;
    }
};
