class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size(),m=0;
        int g[n];
        for(int i=n-1;i>=0;i--)
            g[i]=m=p[i]>m?p[i]:m;
        m=0;
        for(int i=0;i<n;i++)
            m=(g[i]-p[i])>m?(g[i]-p[i]):m;
        return m;
    }
};