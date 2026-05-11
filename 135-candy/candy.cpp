class Solution {
public:
    int candy(vector<int>& rate) {
        int n=rate.size();
        vector<int>c(n,1);
        for(int i=1;i<n;i++)
            c[i]=rate[i]>rate[i-1]?c[i-1]+1:c[i];
        int r=c[n-1];
        for(int i=n-2;i>=0;i--){
            if(rate[i]>rate[i+1]&&c[i]<=c[i+1])
                c[i]=c[i+1]+1;
            r+=c[i];
        }

    return r;
    }
};