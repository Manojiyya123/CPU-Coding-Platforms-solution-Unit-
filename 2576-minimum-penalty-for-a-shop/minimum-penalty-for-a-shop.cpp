class Solution {
public:
    int bestClosingTime(string cus) {
        int s=cus.size(),i;
        vector<int>ln(s),ry(s);
        int r=0,j=0,l=0;i=s;
        while(i--){
            ln[j]=l;
            if(cus[i]=='Y') r++;
            if(cus[j++]=='N') l++;
            ry[i]=r;
        }
        i=0;j=s;
        int t=0;
        while(i<s){
            r=ln[i]+ry[i];
            if(r<j){
                j=r;
                t=i;
            }
            i++;
        }
        return l<j?s:t;
    }
};