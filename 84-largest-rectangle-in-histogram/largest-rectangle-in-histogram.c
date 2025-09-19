
int largestRectangleArea(int* h, int n) {
    if (n <= 0) return 0;
    if (n == 1) return h[0];

    int *lt = (int*)malloc(n * sizeof(int));
    int *rt = (int*)malloc(n * sizeof(int));

    // LEFT: jump left using lt[]; no unsafe h[lt[t]-1] access
    lt[0] = 0;
    for (int i = 1; i < n; ++i) {
        int t = i - 1;
        // while t is valid and h[t] >= h[i], jump to lt[t]-1
        while (t >= 0 && h[t] >= h[i]) {
            // lt[t] is already computed (because t < i), so set t = lt[t]-1
            t = lt[t] - 1; // t may become -1 and loop stops
        }
        lt[i] = t + 1;
    }

    // RIGHT: jump right using rt[]; symmetric approach
    rt[n - 1] = n - 1;
    for (int i = n - 2; i >= 0; --i) {
        int t = i + 1;
        while (t < n && h[t] >= h[i]) {
            t = rt[t] + 1; // rt[t] computed earlier (t > i), may become n
        }
        rt[i] = t - 1;
    }

    int maxArea = 0;
    for (int i = 0; i < n; ++i) {
        int width = rt[i] - lt[i] + 1;
        int area = width * h[i];
        if (area > maxArea) maxArea = area;
    }

    free(lt); free(rt);
    return maxArea;
}
