class Solution {
public:
    string getHint(string s, string g) 
    {
        vector<int>map(10);

        int n = s.size();
        int cntb = 0;
        for(int i = 0 ; i<n ; i++)
        {
            map[s[i]-'0']++;
        }
        for(int i = 0 ; i< n ;i++)
        {
            if(s[i] == g[i])
            {
                cntb++;
                map[s[i]-'0']--;
            }
        }
        int cnt2 = 0;
        for(int  i = 0 ; i<n ; i++)
        {
            if(g[i]==s[i]) continue; 
            if(map[g[i]-'0'])
            {
                cnt2++;
                map[g[i]-'0']--;
            }
        }
        string ans = to_string(cntb)+'A'+to_string(cnt2)+'B';
        return ans;
    }
};
