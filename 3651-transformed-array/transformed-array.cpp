class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int s=nums.size();
        vector<int> r(s,0);
        for(int i=0;i<s;i++){
            int x=(i+nums[i])%s;
            if (x<0)x=s+x;
            r[i]=nums[x];
        }
        return r;
    }
};