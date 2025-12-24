/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int n, int* r) {
    int p=1,z=0;
    for(int i=0;i<n;i++) {
        if(nums[i]!=0)p*=nums[i];
        else z++;}
    if(z>1)
    for(int i=0;i<n;i++) nums[i]=0;
    else if(z==0)
    for(int i=0;i<n;i++) nums[i]=p/nums[i];
    else
    for(int i=0;i<n;i++) {
        if(nums[i]==0) nums[i]=p;
        else nums[i]=0;
    }
    *r=n;
    return nums;
}