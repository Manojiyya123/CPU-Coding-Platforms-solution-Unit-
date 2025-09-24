class Solution {
public:
    void backtrack(int start, int k, int t, vector<int>& cur, vector<vector<int>>& res) {
        if (t == 0 && cur.size() == k) { 
            res.push_back(cur);
            return;
        }
        if (t < 0 || cur.size() > k) return;

        for (int i = start; i <= 9; i++) {
            cur.push_back(i);
            backtrack(i + 1, k, t - i, cur, res);
            cur.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> cur;
        backtrack(1, k, n, cur, res);
        return res;
    }
};
