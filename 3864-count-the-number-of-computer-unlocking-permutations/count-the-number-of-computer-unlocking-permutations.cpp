class Solution {
public:
     static const int N = 100010;
    static const int M = 1000000007;
    long long fact[N];
    Solution() {
        fact[0]= fact[1]= 1;
        for (int i = 2; i < N; i++) {
            fact[i] = (fact[i - 1] * i) % M;
        }
    }
    int countPermutations(vector<int>& com) {
        int n=com.size();
        for(int i=1;i<n;i++)
            if(com[i]<=com[0]) return 0;
        return fact[n-1];
    }
};