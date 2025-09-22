class Solution {
public:
    int check(int n,vector<int> &d){ //call by reference
        if(n==0||n==1) return n;
        if(d[n]!=-1) return d[n];
        d[n]=check(n-1,d)+check(n-2,d);
        return d[n];
    }

    int fib(int n) {
        vector<int>dp(n+1,-1);
        return check(n,dp);
    }
};