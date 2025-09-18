int captureForts(int* f, int s) {
    int m = 0;
    int last = -1;  // index of last non-zero fort

    for (int i = 0; i < s; i++) {
        if (f[i] != 0) {  // found a fort
            if (last != -1 && f[i] != f[last]) {
                // Opposite forts found, calculate zeros between them
                int zeros = i - last - 1;
                m = (zeros > m) ? zeros : m;
            }
            last = i;  // update last fort position
        }
    }
    return m;
}
