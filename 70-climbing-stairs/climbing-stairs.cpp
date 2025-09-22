class Solution {
public:
    int check(int n,vector<int>&dp){
        if(n==1||n==2) return n;
        else if(dp[n]!=-1) return dp[n];
        dp[n]=check(n-1,dp)+check(n-2,dp);
        return dp[n];
    }

    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return check(n,dp);
    }
};