class Solution {
public:
    void dfs(int node,int vis[],vector<int>adj[])
    {
        vis[node]=1;
        for(int it:adj[node])
        {
            if(!vis[it])
            {
                dfs(it,vis,adj);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int m=isConnected.size();
        int n=isConnected[0].size();
        int c=0;
         vector<int>adj[m];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
       int* vis = new int[m];
memset(vis, 0, m * sizeof(int));
       for(int i=0;i<m;i++)
       {
           if(!vis[i])
           {
               c++;
               dfs(i,vis,adj);
           }
       }
    return c;
    }
};