class Solution {
    public int countPartitions(int[] nums) {
        int ts=0,s=0,n=nums.length,c=0;
        for(int i=0;i<n;i++)
         ts+=nums[i];
        for(int i=0;i<n-1;i++){ //if you go end then second array will be empty
            s+=nums[i];
            ts-=nums[i];
            int t=s-ts;
            if(t%2==0) c++;
        }
        return c;
    }
}