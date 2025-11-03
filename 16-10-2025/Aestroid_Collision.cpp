class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int i = 0; i < asteroids.size(); ++i) {
            int curr = asteroids[i];
            bool destroyed = false;

            while (!st.empty() && st.top() > 0 && curr < 0) {
                if (abs(st.top()) < abs(curr)) {
                    st.pop();
                    continue;
                } else if (abs(st.top()) == abs(curr)) {
                    st.pop();
                    destroyed = true;
                    break;
                } else {
                    destroyed = true;
                    break;
                }
            }

            if (!destroyed) {
                st.push(curr);
            }
        }

        vector<int> result;
        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
