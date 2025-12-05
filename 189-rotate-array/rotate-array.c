void rotate(int* nums, int l, int k) {
    k = k % l;
    if (k == 0) return;

    int count = 0;
    int start = 0;

    while (count < l) {
        int cur = start;
        int prev = nums[start];

        while (1) {
            int next = (cur + k) % l;
            int temp = nums[next];
            nums[next] = prev;
            prev = temp;
            cur = next;
            count++;

            if (cur == start) break;
        }
        start++;
    }
}
