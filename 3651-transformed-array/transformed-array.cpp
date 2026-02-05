class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int s=nums.size();
        vector<int> r;
        for(int i=0;i<s;i++){
            int x=(i+nums[i])%s;
            x=x<0?x+s:x;
            r.push_back(nums[x]);
        }
        return r;
    }
};