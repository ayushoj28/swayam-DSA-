class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int r = image.size();
        int c = image[0].size();
        int original = image[sr][sc];

        if (original == color) return image; // no need to change

        queue<pair<int,int>> q;
        q.push({sr, sc});
        image[sr][sc] = color;

        // 4 possible directions
        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();

            for (int k = 0; k < 4; k++) {
                int nx = x + dx[k];
                int ny = y + dy[k];

                if (nx >= 0 && nx < r && ny >= 0 && ny < c && image[nx][ny] == original) {
                    image[nx][ny] = color;
                    q.push({nx, ny});
                }
            }
        }

        return image;
    }
};
