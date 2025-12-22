class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size();
        int j=n-1,m;
        int g[n];g[n-1]=m=p[n-1];
        while(j>=0){
            if(p[j]>=m){
                m=p[j];
                g[j--]=m;
            }
            else g[j--]=m;
        }
        m=0;
        for(int i=0;i<n;i++){
            j=g[i]-p[i];
            m=j>m?j:m;
        }
        return m;
    }
};