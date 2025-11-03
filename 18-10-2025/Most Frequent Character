class Solution {
public:
    char getMaxOccuringChar(string& s) {
        unordered_map<char, int> m;
        for (char ch : s) {
            m[ch]++;
        }

        int maxFreq = 0;
        char ans = 'z' + 1;  
        for (auto &p : m) {
            char c = p.first;
            int freq = p.second;

            if (freq > maxFreq) {
                maxFreq = freq;
                ans = c;
            } 
            else if (freq == maxFreq && c < ans) {
                ans = c;
            }
        }
        return ans;
    }
};
