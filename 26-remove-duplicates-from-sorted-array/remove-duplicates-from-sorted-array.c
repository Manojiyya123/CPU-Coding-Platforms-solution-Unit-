int removeDuplicates(int* nums, int n) {
    int f[201]={0};
    int j=0;
    for(int i=0;i<n;i++) {
        if(f[nums[i]+100]==1)continue;
        else {
            nums[j++]=nums[i];
            f[nums[i]+100]=1;
        }
        }
    return j;
}