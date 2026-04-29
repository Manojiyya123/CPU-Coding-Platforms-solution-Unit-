class Solution {
public:
    int longestCommonSubsequence(string t1, string t2) {
        int n1 = t1.size();
        int n2 = t2.size();

        vector<vector<int>> dp(n1, vector<int>(n2, -1));

        return helper(0, 0, t1, t2, dp);
    }

    int helper(int i, int j, string &t1, string &t2, vector<vector<int>> &dp) {
        if (i >= t1.size() || j >= t2.size())
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        if (t1[i] == t2[j])
            return dp[i][j] = 1 + helper(i + 1, j + 1, t1, t2, dp);

        return dp[i][j] = max(
            helper(i + 1, j, t1, t2, dp),
            helper(i, j + 1, t1, t2, dp)
        );
    }
};