int* twoSum(int* n, int ns, int t, int* rs) {
    *rs = 2;
    int* s = (int*)malloc(2 * sizeof(int));

    for (int i = 0; i < ns; i++) {
        for (int j = i + 1; j < ns; j++) {
            if (n[i] + n[j] == t) {
                s[0] = i;
                s[1] = j;
                return s;
            }
        }
    }

    return NULL;
}