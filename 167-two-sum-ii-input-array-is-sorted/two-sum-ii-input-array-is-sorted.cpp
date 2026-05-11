class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int i=0,j=nums.size()-1;
        vector<int>r(2);
        while(i<j){
            int f=nums[i]+nums[j];
            if(f==t){
                r[0]=i+1;r[1]=j+1;
                break;
            }
            else if(f>t)j--;
            else i++;
        }
        return r;
    }
};