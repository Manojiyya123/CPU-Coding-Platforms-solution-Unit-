class Solution {
public:
    int countBinarySubstrings(string s) {
        int n = s.size();
        int p = 0,c = 1, r = 0;
        for(int i = 1; i < n; i++) {
            if(s[i] == s[i-1]) c++;
            else {
                r += min(p, c);
                p = c;
                c = 1;
            }
        }
        r += min(p, c);
        return r;
    }
};
