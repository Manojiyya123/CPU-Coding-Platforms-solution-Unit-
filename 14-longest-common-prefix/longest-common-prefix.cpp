class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int l=strs.size()-1,n=strs[0].size(),m=strs[l].size();
        int i=0;
        string sub="";
        while(i<n&&i<m){
            if(strs[0][i]==strs[l][i]) sub+=strs[0][i++] ;
            else break;
        }
        return sub;
    }
};