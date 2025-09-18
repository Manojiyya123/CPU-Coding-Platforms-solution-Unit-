class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char ,int>mp;
        int left =0,ml=0;
       for(int r=0;r<s.size();r++){
        if(mp.count(s[r]))
            left=max(left,mp[s[r]]+1);
        mp[s[r]]=r;
        ml=max(ml,r-left+1);
       }
        return ml;
    }
};