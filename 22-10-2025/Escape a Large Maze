class Solution {
public:
    const int LIMIT = 1000000;
    const int MAX_STEPS = 20000; 

    bool bfs(vector<int>& start, vector<int>& finish, unordered_set<long long>& blockedSet) {
        queue<pair<int,int>> q;
        unordered_set<long long> visited;
        q.push({start[0], start[1]});
        visited.insert(encode(start[0], start[1]));

        int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

        while(!q.empty() && visited.size() <= MAX_STEPS){
            auto [x, y] = q.front();
            q.pop();

            if(x == finish[0] && y == finish[1])
                return true;

            for(auto& d : dirs){
                int nx = x + d[0];
                int ny = y + d[1];

                if(nx < 0 || ny < 0 || nx >= LIMIT || ny >= LIMIT)
                    continue;

                long long code = encode(nx, ny);
                if(blockedSet.count(code) || visited.count(code))
                    continue;

                visited.insert(code);
                q.push({nx, ny});
            }
        }
        return visited.size() > MAX_STEPS;
    }

    long long encode(int x, int y) {
        return ((long long)x << 20) | y;
    }

    bool isEscapePossible(vector<vector<int>>& blocked, vector<int>& source, vector<int>& target) {
        unordered_set<long long> blockedSet;
        for(auto &b : blocked)
            blockedSet.insert(encode(b[0], b[1]));

        return bfs(source, target, blockedSet) && bfs(target, source, blockedSet);
    }
};
