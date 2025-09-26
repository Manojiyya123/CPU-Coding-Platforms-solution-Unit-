bool cmp(vector<int>&a,vector<int>&b){
    return a[0]<b[0];
}
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(),in.end(),cmp);
        vector<vector<int>> a;
        a.push_back(in[0]);
        for (int i = 1; i < in.size(); i++) {
            vector<int>& last = a.back();
            if (in[i][0] <= last[1]) {
                last[1] = max(last[1], in[i][1]);
            } else {
                a.push_back(in[i]);
            }
        }
        return a;
    }
};