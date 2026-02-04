bool isTrionic(int* nums, int n) {
    int i=1,b=0;
    if(n<=3) return false;
    if(nums[0]>=nums[1]) return false;
    while(i<n){
        if(nums[i-1]==nums[i]) return false;
        if(nums[i-1]>nums[i]) break;
        i++;
    }
    if(i==n) return false;
    while(i<n){
        if(nums[i-1]==nums[i]) return false;
        if(nums[i-1]<nums[i]) break;
        i++;
    }
    if(i==n) return false;
    while(i<n){
        if(nums[i-1]==nums[i]) return false;
        if(nums[i-1]>nums[i]) return false;
        i++;
    }
    return true;
}