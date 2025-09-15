class Solution {
public:
    int trap(vector<int>& height) {
        int r=0;
        int n=height.size();
        vector<int>lm(n);
        vector<int>rm(n);
            lm[0]=height[0];
            for(int j=1;j<n;j++) lm[j]=max(lm[j-1],height[j]);
            rm[n-1]=height[n-1];
            for(int k=n-2;k>=0;k--) rm[k]=max(rm[k+1],height[k]);
            for(int i=0;i<n;i++)r+=min(lm[i],rm[i])-height[i];

        return r;
    }
};