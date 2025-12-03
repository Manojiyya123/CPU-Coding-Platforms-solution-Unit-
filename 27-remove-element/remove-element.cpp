class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c=0;
        int r=nums.size()-1,l=0;
        while(l<=r){
            if(nums[r]==val) r--;
            else if(nums[l]==val) nums[l++]=nums[r--];
            else l++;

        }
        return l;
    }
};