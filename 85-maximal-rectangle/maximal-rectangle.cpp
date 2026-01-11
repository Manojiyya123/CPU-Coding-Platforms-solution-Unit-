class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int M = matrix.size();
        if (!M) return 0;
        int N = matrix[0].size();
        vector<vector<int>> mat(M, vector<int>(N,0));
        for (int i = 0; i < M; i++) 
            for (int j = 0; j < N; j++)
                if (matrix[i][j] == '1')
                    mat[i][j] = (j ? mat[i][j - 1] : 0) + 1;
        int ans = 0;
        for (int j = 0; j < N; j++)
            for (int i = 0; i < M; i++) {
                int w = mat[i][j];
                if(!w) continue;
                for (int k = i;k < M; k++) {
                    w = min(w, mat[k][j]);
                    ans = max(ans, w * (k - i + 1));
                }
            }
        return ans;
    }
};