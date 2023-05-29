//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    private:
    void dfs(int row, int col, vector<vector<int>> &vis, 
    vector<vector<int>> &mat, int delrow[], int delcol[]) {
        vis[row][col] = 1; 
        int n = mat.size();
        int m = mat[0].size();
        
        // check for top, right, bottom, left 
        for(int i = 0;i<4;i++) {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i]; 
            // check for valid coordinates and unvisited Os
            if(nrow >=0 && nrow <n && ncol >= 0 && ncol < m 
            && !vis[nrow][ncol] && mat[nrow][ncol] == 1) {
                dfs(nrow, ncol, vis, mat, delrow, delcol); 
            }
        }
    }
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        int c=0;
        int n=grid.size();
        int m=grid[0].size();
         int delrow[] = {-1, 0, +1, 0};
        int delcol[] = {0, 1, 0, -1}; 
       vector<vector<int>>vis(n,vector<int>(m,0));
       for(int i=0;i<m;i++) // first row and last row
       {
           if(!vis[0][i] && grid[0][i]==1)
           {
               dfs(0,i,vis,grid,delrow,delcol);
           }
           if(!vis[n-1][i] && grid[n-1][i]==1)
           {
                 dfs(n-1,i,vis,grid,delrow,delcol);
           }
       }
       for(int j=0;j<n;j++)
       {
           if(!vis[j][0] && grid[j][0]==1)
           {
               dfs(j,0,vis,grid,delrow,delcol);
           }
           if(!vis[j][m-1] && grid[j][m-1]==1)
           {
               dfs(j,m-1,vis,grid,delrow,delcol);
           }
       }
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(!vis[i][j] && grid[i][j]==1)
               {
                   c++;
               }
           }
       }
       return c;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends