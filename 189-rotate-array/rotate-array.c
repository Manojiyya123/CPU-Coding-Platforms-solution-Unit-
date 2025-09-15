void rotate(int* nums, int numsSize, int k) {
    int l = numsSize;
    k = k % l;
    if (k == 0) return;
    int n[l]; 
    int i = 0;
    for (int j = l - k; j < l; j++) {
        n[i++] = nums[j];
    }
    for (int j = 0; j < l - k; j++) {
        n[i++] = nums[j];
    }
    for (i = 0; i < l; i++) {
        nums[i] = n[i];
    }
}
