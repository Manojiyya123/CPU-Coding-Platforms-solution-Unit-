class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=t.size(),m=s.size();
        if(n==0&&m==0) return true;
        int k=0;
        for(int i=0;i<n;i++){
            if(t[i]==s[k]) k++;
            if(k==m) return true;
        }
        return false;
    }
};