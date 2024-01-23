// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary

class Solution {
public:
    double average(vector<int>& salary) {
        double avg = 0;
        int max = 0, min = INT_MAX;
        for(int i = 0; i<salary.size(); i++){
            if(salary[i]>=max){
                max = salary[i];
            }
            if(salary[i]<=min){
                min = salary[i];
            }
            avg = avg+salary[i];
        }
        avg = avg-(max+min);
        avg = avg/(salary.size()-2);
        return avg;
    }
};