class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        
        int start = 0, end = 0;
        
        auto expandAroundCenter = [&](int left, int right) {
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                left--;
                right++;
            }
            return right - left - 1; // Length of palindrome
        };
        
        for (int i = 0; i < s.size(); ++i) {
            int len1 = expandAroundCenter(i, i);     // Odd length palindrome
            int len2 = expandAroundCenter(i, i + 1); // Even length palindrome
            int len = max(len1, len2);
            if (len > end - start) {
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }
        
        return s.substr(start, end - start + 1);
    }
};
