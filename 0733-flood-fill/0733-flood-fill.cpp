class Solution {
private:
    void dfs(int row,int col,int inicol,int color,vector<vector<int>>& ans,vector<vector<int>>& image,int delrow[],int delcol[])
    {
        int n=image.size();
        int m=image[0].size();
        ans[row][col]=color;
        // traverse the neighbour 
        for(int i=0;i<4;i++)
        {
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<n&& ncol>=0 && ncol<m && image[nrow][ncol]==inicol && ans[nrow][ncol]!=color)
            {
                dfs(nrow,ncol,inicol,color,ans,image,delrow,delcol);
            }
        }
        
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>ans=image;
        int inicol=image[sr][sc];
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,0,-1};
        dfs(sr,sc,inicol,color,ans,image,delrow,delcol);
        return ans;
    }
};