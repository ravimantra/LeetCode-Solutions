// https://leetcode.com/problems/max-area-of-island

class Solution {
public:
    vector<int> x= {-1,0,+1,0}, y= {0,+1,0,-1};
    int m,n;

    bool isValid(int i,int j){
        return ((i>=0 && i<m) && (j>=0 && j<n));
    }

    int bfs(int i, int j,vector<vector<int>>& grid){
        int ans=1;
        queue<vector<int>> q;
        grid[i][j]=2;
        q.push({i,j});
        while(!q.empty()){
            int i_= q.front()[0];
            int j_= q.front()[1];
            q.pop();
            for(int ind=0;ind<4;ind++){
                if(isValid(i_+x[ind] , j_+y[ind])  && grid[i_+x[ind]][j_+y[ind]]==1){
                    ans++;
                    grid[i_+x[ind]][j_+y[ind]]= 2;
                    q.push({i_+x[ind] , j_+y[ind]});
                }
            }
        }
        return ans;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        m= grid.size();
        n= grid[0].size();
        int ans= 0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int temp= 0;
                if(grid[i][j]==1) temp= bfs(i,j,grid);
                ans= max(ans,temp);
            }
        }
        return ans;
    }
};