int maxSubArray(int* nums, int n) {
    int s=0,m=nums[0];
    for(int i=0;i<n;i++){
        s+=nums[i];
        m=s>m?s:m;
        s=s<0?0:s;
    } return m;
}