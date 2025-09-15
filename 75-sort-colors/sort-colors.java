class Solution {
    public void sortColors(int[] nums) {
        int [] a = new int[3];
        for(int n:nums){
            a[n]++;
        }
        int i=0;
        for (int j = 0; j < a[0]; j++) nums[i++] = 0;
        for (int j = 0; j < a[1]; j++) nums[i++] = 1;
        for (int j = 0; j < a[2]; j++) nums[i++] = 2;
    }
}