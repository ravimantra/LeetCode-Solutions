// https://leetcode.com/problems/number-of-good-pairs

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
{
    int ans=0;
   unordered_map<int,int> output;
  
   for(auto &value:nums)
   {
    output[value]++;
    }
    
    for(auto &value: output)
    {
        int num=value.second;
        ans=ans+(num*(num-1)/2);
    }
   return ans;
}

};
