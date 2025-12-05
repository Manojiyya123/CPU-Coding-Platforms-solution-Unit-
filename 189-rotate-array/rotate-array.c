void reverse(int* nums, int l, int r) {
    while (l < r) {
        int t = nums[l];
        nums[l] = nums[r];
        nums[r] = t;
        l++;
        r--;
    }
}

void rotate(int* nums, int n, int k) {
    k = k % n;
    if (k == 0) return;

    reverse(nums, 0, n-1);      // Step 1
    reverse(nums, 0, k-1);      // Step 2
    reverse(nums, k, n-1);      // Step 3
}
