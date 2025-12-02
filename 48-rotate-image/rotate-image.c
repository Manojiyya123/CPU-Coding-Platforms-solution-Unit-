void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int n = matrixSize;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(&matrix[i][j], &matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++) {
        int left = 0, right = n - 1;
        while (left < right) {
            swap(&matrix[i][left], &matrix[i][right]);
            left++;
            right--;
        }
    }
}
