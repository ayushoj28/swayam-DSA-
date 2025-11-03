class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        if(p.length() > s.length())
            return {};

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        vector<int> anaPos;
    
        for(int i = 0 ; i < p.length(); i++)
        {
            freq1[p[i]-'a']++;
            freq2[s[i]-'a']++;
        }

        if(freq1 == freq2)
            anaPos.push_back(0);

        for(int i = p.length(); i < s.length(); i++)
        {
            freq2[s[i-p.length()]-'a']--;
            freq2[s[i]-'a']++;

            if(freq2 == freq1)
                anaPos.push_back(i-p.length()+1);
        }

        return anaPos;    
    }
};
