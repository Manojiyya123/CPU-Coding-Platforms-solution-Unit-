class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        sort(strs.begin(),strs.end());
        string s1 = strs[0];
        string s2 = strs[strs.size()-1];
        int i=0;
        while(s1[i]!='\0'&&s2[i]!='\0')
            if(s1[i]!=s2[i]||++i<0) break;
        return s1.substr(0,i);
    }
};