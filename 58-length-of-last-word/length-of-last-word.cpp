class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.length();
        while(l>=0&&s[--l]==' ');
        int c=0;
        while(l>=0&&s[l--]!=' ') c++;
        return c;
    }
};