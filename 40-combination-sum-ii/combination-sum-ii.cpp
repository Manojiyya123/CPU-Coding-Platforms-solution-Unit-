class Solution {
public:
    void backtrack(int start,vector<int>&can,int t,vector<vector<int>> &res,vector<int>& cur){
        if(t<0) return ;
        if(t==0){
            res.push_back(cur);
            return;
        }
        for(int i=start;i<can.size();i++)
        {   
            if (i > start && can[i] == can[i-1]) continue;
            cur.push_back(can[i]);
            backtrack(i+1,can,t-can[i],res,cur);
            cur.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> cur;
        sort(candidates.begin(), candidates.end());
        backtrack(0,candidates,target,res,cur);
        return res;
    }
};