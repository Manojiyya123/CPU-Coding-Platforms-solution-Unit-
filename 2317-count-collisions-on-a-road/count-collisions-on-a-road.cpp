class Solution {
public:
    int countCollisions(string d) {
        int i=0,c=0,r=0;
        while(d[i]=='L') i++;
        while(d[i++]!='\0'){
            if(d[i-1]=='S') {
                r=0;continue;
            }
            else if(d[i-1]=='R')r++;
            else r=0;
            c++;
        }
        return r==0?c:c-r;
    }
};