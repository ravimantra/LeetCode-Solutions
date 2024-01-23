// https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate

class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int M=INT_MAX, soln=-1;
        for (int i=0; i<points.size(); i++) {
            
            
            if (x==points[i][0] || y==points[i][1]) {

                
                int t= abs(y-points[i][1]) + abs(x-points[i][0]);

               
                soln=M>t ? i:soln;

                
                M = M<t ? M:t;
            }
        }

        return soln;
    }
};