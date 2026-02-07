class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        sort(strs.begin(),strs.end());
        string s1 = strs[0];
        string s2 = strs[strs.size()-1];
        int n=s1.size(),m=s2.size(),i=0;
        while(i<n&&i<m)
            if(s1[i]!=s2[i]||++i<0) break;
        return s1.substr(0,i);
    }
};