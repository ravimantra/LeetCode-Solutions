// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> ans;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> v;
        for (auto val: arr){
            int dem= val;
            int cnt=0;
            while (dem>0){
                cnt+= (dem&1);
                dem= dem>>1;
            }
            v.push({cnt,val});
        }
        while(!v.empty()){
        ans.push_back(v.top().second);
        v.pop();
        }
        return ans;
    }
};