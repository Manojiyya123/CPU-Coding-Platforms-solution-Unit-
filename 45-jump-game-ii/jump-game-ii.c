int jump(int* nums, int ns) {
    int x=ns-1,c=0;
   while(x>0){
        int j=-1,l=x;
        while(j++<x)
            if(nums[j]>=l-j) x=j;
       c++;
    }
    return c;
}