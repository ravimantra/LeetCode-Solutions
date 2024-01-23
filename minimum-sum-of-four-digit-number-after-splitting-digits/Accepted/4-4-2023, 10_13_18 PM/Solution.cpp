// https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits

class Solution {
public:
    int minimumSum(int num) {
        vector<int>v;
        while(num){
            v.push_back(num%10);
            num = num/10;
        }
        sort(v.begin(),v.end());
        swap(v[1],v[2]); 

        int num1=0,num2=0;
        return v[0]*10+v[1]+ v[2]*10+v[3]; 
    }
}; 