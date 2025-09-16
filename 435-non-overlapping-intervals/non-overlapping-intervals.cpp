class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.empty()) return 0;
        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b) {
            return a[1] < b[1];
        });
        int c=1,e= intervals[0][1];
        int l=intervals.size();
        for (int i = 1; i < l; i++) {
            if (intervals[i][0] >= e) {
                c++;
                e= intervals[i][1];
            }
        }
        return l - c;
    }
};
