// https://leetcode.com/problems/jewels-and-stones

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(auto s : stones){
            if(jewels.find(s) != string::npos){
                count++;
            }
        }
        return count;
    }
};