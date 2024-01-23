// https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length

class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0, counting = 0;
        unordered_set<char> bag = {'a', 'e', 'i', 'o', 'u'};
        for (int i = 0, local = 0; i < s.size(); i++) {
            local += bag.count(s[i]);
            if (i - k >= 0) local -= bag.count(s[i-k]);
            count = max(count, local);
        }
        return count;
    }
};