// https://leetcode.com/problems/sqrtx

class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x;
        int  mid = start + (end-start)/2;
        while(start<=end){
            if(x==0){ return 0;}
            if(mid == x / mid){
                return mid;
            }
            else if(mid > x/mid){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            mid = start +(end-start)/2;
        }
        return end;

    }
};