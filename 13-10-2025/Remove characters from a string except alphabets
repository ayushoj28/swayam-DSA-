#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to remove non-alphabet characters
    string removeNonAlphabets(string s) {
        string result = "";
        for (char c : s) {
            // Check if character is alphabet
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                result += c;
            }
        }
        return result;
    }
};

int main() {
    string s = "He!!llo W@orld123";
    Solution sol;
    cout << "Original String: " << s << endl;
    cout << "Filtered String: " << sol.removeNonAlphabets(s) << endl;
    return 0;
}
