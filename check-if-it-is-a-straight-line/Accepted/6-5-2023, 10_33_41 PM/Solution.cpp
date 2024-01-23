// https://leetcode.com/problems/check-if-it-is-a-straight-line

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& x) {
        int n = x.size();
        sort(x.begin(),x.end());
        if( n == 1 || n == 2){
            return true;
        }
        double slope = (double)(x[1][1]-x[0][1]) / (double)(x[1][0] - x[0][0]);
        for(int i =1;i<n-1;i++){
            double tempS = (double)(x[i+1][1]-x[i][1]) / (double)(x[i+1][0] - x[i][0]);
            if( abs(tempS) != abs(slope)){
                return false;
            }
        }
        return true;
    }
};