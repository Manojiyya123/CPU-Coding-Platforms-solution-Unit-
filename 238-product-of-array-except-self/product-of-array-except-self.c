/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int n, int* r) {
    int p=1,z=0,zi=0;
    for(int i=0;i<n;i++) {
        if(nums[i]!=0)p*=nums[i];
        else {
            z++;zi=i;
        }
    }
    if(z>=1){
        for(int i=0;i<n;i++) nums[i]=0;
        if(z==1) nums[zi]=p;
    }
    else
        for(int i=0;i<n;i++) nums[i]=p/nums[i];
    *r=n;
    return nums;
}