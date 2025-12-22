bool canJump(int* nums, int s) {
    int f=0;
    for(int i=0;i<s;i++){
        if(i>f) return false;
        int d=i+nums[i];
        f=d>f?d:f;
    }
    return true;
}