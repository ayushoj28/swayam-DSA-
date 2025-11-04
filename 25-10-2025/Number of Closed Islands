class Solution {
public:
    int r, c;

    void dfs(int i, int j, vector<vector<int>>& grid) {
        if (i < 0 || i >= r || j < 0 || j >= c || grid[i][j] == 1)
            return;
        
        grid[i][j] = 1; 

        int row[4] = {-1, 1, 0, 0};
        int col[4] = {0, 0, -1, 1};

        for (int k = 0; k < 4; k++) {
            dfs(i + row[k], j + col[k], grid);
        }
    }

    int closedIsland(vector<vector<int>>& grid) {
        r = grid.size();
        c = grid[0].size();
        for (int i = 0; i < r; i++) {
            if (grid[i][0] == 0) dfs(i, 0, grid);
            if (grid[i][c - 1] == 0) dfs(i, c - 1, grid);
        }
        for (int j = 0; j < c; j++) {
            if (grid[0][j] == 0) dfs(0, j, grid);
            if (grid[r - 1][j] == 0) dfs(r - 1, j, grid);
        }
        int count = 0;
        for (int i = 1; i < r - 1; i++) {
            for (int j = 1; j < c - 1; j++) {
                if (grid[i][j] == 0) {
                    count++;
                    dfs(i, j, grid);
                }
            }
        }

        return count;
    }
};
