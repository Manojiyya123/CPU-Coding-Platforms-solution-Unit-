int jump(int* nums, int ns) {
    int x=ns-1;
    int i=x,c=0;
   while(i>0){
        int j=i;
        while(j--){
            if(nums[j]>=i-j) x=j;
        }
       i=x;
       c++;
    }
    return c;
}