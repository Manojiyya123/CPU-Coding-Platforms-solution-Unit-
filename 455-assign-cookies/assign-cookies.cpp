class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int c=0;
        int gl=g.size(),sl=s.size(),i,j=i=0;
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        while(i<gl&&j<sl){
            if(s[j]>=g[i]){
                c++;i++;
            }
            j++;
        }
        return c;
    }
};