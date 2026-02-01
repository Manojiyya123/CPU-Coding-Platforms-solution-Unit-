int minimumCost(int* nums, int n) {
    int ans = nums[0], a = INT_MAX, b = INT_MAX;
        for (int i = 1; i < n; i++){
            int x = nums[i];
            if (x <= b){
                if (x <= a){
                    b = a;
                    a = x;
                }
                else
                    b = x;
            }
        }
        return ans + a + b;
}