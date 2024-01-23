// https://leetcode.com/problems/matrix-diagonal-sum

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int answer=0 ;
        int j=mat[0].size()-1;
        for(int i =0;i<mat.size();i++){
            answer=answer+mat[i][i]; 
            if(i!=j) answer=answer+mat[i][j];
            j--;
        }
        return answer;
    }
};   