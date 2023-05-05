class Solution {
public:
    void dfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        if (row < 0 || row >= n || col < 0 || col >= m || vis[row][col] == 1 || grid[row][col] == '0') {
            return;
        }
        vis[row][col] = 1;
        // traverse its neighbors
        int dRow[] = {-1, 0, 1, 0};
        int dCol[] = {0, 1, 0, -1};
        for (int k = 0; k < 4; k++) {
            int nrow = row + dRow[k];
            int ncol = col + dCol[k];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == '1' && !vis[nrow][ncol]) {
                dfs(nrow, ncol, vis, grid);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int c = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < m; col++) {
                if (!vis[row][col] && grid[row][col] == '1') {
                    c++;
                    dfs(row, col, vis, grid);
                }
            }
        }
        return c;
    }
};
