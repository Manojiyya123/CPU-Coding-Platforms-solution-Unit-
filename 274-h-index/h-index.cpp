class Solution {
public:
    int hIndex(vector<int>& cit) {
        int h=0,n=cit.size();
        sort(cit.begin(),cit.end(),[](int a,int b){
            return a>b;
        });
        for(int i=0;i<n;i++)
            if(i+1<=cit[i]) h=i+1;
        return h;
    }
};