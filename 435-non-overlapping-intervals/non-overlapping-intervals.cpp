bool cmp(vector<int> &a,vector<int> &b){
        return a[1]<b[1];
    }
class Solution {
public:
    
    int eraseOverlapIntervals(vector<vector<int>>& in) {
        sort(in.begin(),in.end(),cmp);
        int r=0,ce=in[0][1];
        for(int i=1;i<in.size();i++){
            if(in[i][0]>=ce) ce=in[i][1];
            else r++;
        }
        return r;
    }
};