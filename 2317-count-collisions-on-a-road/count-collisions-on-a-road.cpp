class Solution {
public:
    int countCollisions(string d) {
        int i=0,c=0,r=0;
        while(d[i]=='L') i++;
        while(d[i]!='\0'){
            if(d[i]!='S'){
                if(d[i]=='R')r++;
                else r=0;
                c++;
            }
            else r=0;
            i++;
        }
        return r=0?c:c-r;
        
    }
};