class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
             int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
             //{{r,c},t}
        queue<pair<pair<int,int>,int>>q;
        int cntFresh=0;
          for(int i=0;i<n;++i){
              for(int j=0;j<m;++j){
                    if(grid[i][j]==2){
                        q.push({{i,j},0});
                        vis[i][j]=true;
                    }else{
                        vis[i][j]=false;
                    }
                    if(grid[i][j]==1)cntFresh++;
              }
          }
          int time=0;
          int r[]={-1,0,+1,0};
          int c[]={0,-1,0,+1};
          int cnt=0;
          while(!q.empty()){
              auto front=q.front();
              q.pop();
              int row=front.first.first;
              int col=front.first.second;
              int t=front.second;
              time=max(time,t);
            for(int i=0;i<4;++i){
                 int nrow=row+r[i];
                 int ncol=col+c[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] 
            && grid[nrow][ncol]==1){
                vis[nrow][ncol]=true;
                q.push({{nrow,ncol},t+1});
                cnt++;
            }  
            }
          }
        if(cntFresh!=cnt)return -1;
          return time;
    }
};