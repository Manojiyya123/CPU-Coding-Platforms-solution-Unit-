class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int s=nums.size();
        vector<int> r;
        for(int i=0;i<s;i++)
            r.push_back(nums[((i+nums[i])%s+s)%s]);
        return r;
    }
};