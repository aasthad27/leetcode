class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int left =0;
        int right=m-1;
        int top=0;
        int down=n-1;
        vector<int>ans;
        while(ans.size()<n*m)
        {
        for(int i=left;i<=right && ans.size()<n*m ;i++)
        {
            ans.push_back(matrix[top][i]);
        }
         for(int i=top+1;i<=down-1 && ans.size()<n*m ;i++)
        {
            ans.push_back(matrix[i][right]);
        }
         for(int i=right;i>=left && ans.size()<n*m ;i--)
        {
            ans.push_back(matrix[down][i]);
        }
         for(int i=down-1;i>=top+1 && ans.size()<n*m ;i--)
        {
            ans.push_back(matrix[i][left]);
        }
        left++;
        right--;
        top++;
        down--;
    }
        return ans;
    }
};