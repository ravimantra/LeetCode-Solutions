// https://leetcode.com/problems/letter-case-permutation

class Solution {
public:
    void solve(int i,string str,vector<string> &ans){
        if(i>=str.length()){
            ans.push_back(str);
            return;
        }
        if(!(str[i]<='9'&&str[i]>='0')){
            str[i] = tolower(str[i]);
            solve(i+1,str,ans);
            str[i] = toupper(str[i]);
            solve(i+1,str,ans);
        }else{
            solve(i+1,str,ans);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        solve(0,s,ans);
        return ans;
    }
};