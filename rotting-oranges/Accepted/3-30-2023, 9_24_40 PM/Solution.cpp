// https://leetcode.com/problems/rotting-oranges

class Solution {
	/*
		Time Complexity : O(N^2)
		Space Complexity : O(N^2)
	*/
    
	int m, n;
    
    bool isValid(int i, int j){
        if(i>=0 && i<m && j>=0 && j<n) return true;
        return false;
    }
    
public:
    int orangesRotting(vector<vector<int>>& grid) {
        m = grid.size(), n = grid[0].size();
        int freshOranges = 0;
        queue<pair<int, int>> q1;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1){
                    freshOranges++;
                }else if(grid[i][j] == 2){
                    q1.push({i, j});
                }
            }
        }
        
        if(freshOranges == 0) return 0;
        
        vector<int> x = {+1, -1, 0, 0};
        vector<int> y = {0, 0, +1, -1};
        
        int time = 0;
        
        while(!q1.empty()){
            int size = q1.size();
            
            while(size--){
                pair<int, int> curr = q1.front();
                q1.pop();
                
                for(int k=0; k<4; k++){
                    int newX = curr.first + x[k];
                    int newY = curr.second + y[k];
                    
                    if(isValid(newX, newY) && grid[newX][newY] == 1){
                        grid[newX][newY] = 2;
                        q1.push({newX, newY});
                        freshOranges--;
                    }
                }
            }
            
            time++;
        }
        
        if(freshOranges > 0) return -1;
        return --time;
    }
};