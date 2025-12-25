class Solution {
public:
    int M=(1e9)+7;
    long long maximumHappinessSum(vector<int>& happy, int k) {
        sort(happy.begin(),happy.end(),[](int a,int b){
            return a>b;
        });
        int i=0;
        long long s=0;
        while(k--){
            if(happy[i]-i>0) s+=(happy[i]-i++)%M;
            else break;
        }
    return s;
    }
};