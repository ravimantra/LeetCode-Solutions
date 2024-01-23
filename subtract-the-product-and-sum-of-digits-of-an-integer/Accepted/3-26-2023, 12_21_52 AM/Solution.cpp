// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        int digit = 1;
        int prod = 1;
        int sum = 0;
        while(n!=0){
            digit = n%10;
            sum += digit;
            prod *= digit;
            n=n/10;
        }
        int result = prod - sum;
        return result;
    }
};