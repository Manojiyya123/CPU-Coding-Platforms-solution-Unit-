class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int l=nums.size();
        if(l==3) return nums[0]+nums[1]+nums[2];
        sort(nums.begin()+1,nums.end());
        return nums[0]+nums[1]+nums[2];
    }
};