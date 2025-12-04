/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* applyOperations(int* nums, int n, int* rs) {
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                nums[i-1]*=2;
                nums[i]=0;
            }
        }
        int j=0;
        for(int i=1;i<n;i++) {
            if(nums[i]!=0&&nums[j]==0) {
                nums[j++]=nums[i];
                nums[i]=0;
            }
            else if(nums[j]==0) continue;
            else j++;
        }
        *rs=n;
        return nums;
}