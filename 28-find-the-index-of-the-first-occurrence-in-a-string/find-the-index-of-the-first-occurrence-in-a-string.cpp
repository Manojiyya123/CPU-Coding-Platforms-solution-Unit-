class Solution {
public:
    int strStr(string h, string need) {
        int n=h.size(),l=need.size();
        for(int i=0;i<n;i++){
            if(h[i]==need[0]&&n-i>=l){
                int j=1,k=i+1;
                while(j<l&&h[k++]==need[j]) j++;
                if(j==l) return i;
            }
        }
        return -1;
    }
};