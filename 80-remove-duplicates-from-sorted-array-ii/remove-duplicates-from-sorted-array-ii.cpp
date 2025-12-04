class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1,b=1,n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]&&b==1){
                nums[k++]=nums[i];
                b=0;
            }
            else if(nums[i]!=nums[i-1]){
                nums[k++]=nums[i];
                b=1;
                
            }
            

        }return k;
    }
};