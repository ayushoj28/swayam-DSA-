class Solution {
public:
    int r, c;
    
    void dfs(int i, int j, vector<vector<char>>& grid) {
        if(i < 0 || i >= r || j < 0 || j >= c || grid[i][j] != '1')
            return;
        
        grid[i][j] = '0'; // mark visited
        
        int row[4] = {-1, 1, 0, 0};
        int col[4] = {0, 0, -1, 1};
        
        for(int k=0; k<4; k++) {
            dfs(i + row[k], j + col[k], grid);
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        r = grid.size();
        c = grid[0].size();
        
        int count = 0;
        
        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) {
                if(grid[i][j] == '1') {
                    count++;
                    dfs(i, j, grid);
                }
            }
        }
        return count;
    }
};
