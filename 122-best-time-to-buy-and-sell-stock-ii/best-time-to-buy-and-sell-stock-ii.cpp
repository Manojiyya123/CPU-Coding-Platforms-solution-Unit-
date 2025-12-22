class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size();
        int g=0,b=p[0];
        for(int i=1;i<n;i++){
            if(p[i]<p[i-1]) {
                g+=p[i-1]-b;
                b=p[i];
            }
        }
        g += p[n - 1] - b;
        return g;
    }
};