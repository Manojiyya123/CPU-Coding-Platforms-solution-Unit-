class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& cap) {
        int a=0;
        int as=apple.size(),cs=cap.size();
        while(as--) a+=apple[as];
        sort(cap.begin(),cap.end());
        int i=cs;
        while(a>0&&cs--)a-=cap[cs];
        return i-cs;

    }
};