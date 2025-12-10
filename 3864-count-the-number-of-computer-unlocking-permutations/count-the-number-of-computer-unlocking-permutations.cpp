class Solution {
public:
    static const int M = 1000000007;
    int countPermutations(vector<int>& com) {
        int n=com.size();
        long long s=1;
        for(int i=1;i<n;i++){
            if(com[i]<=com[0]) return 0;
            s=(s*i)%M;
        }
        return s;
    }
};