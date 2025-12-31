class Solution {
public:
    int r,c,t,m;
    void dfs(vector<vector<int>>&land,vector<vector<int>>&track,int i,int j){
        if(i>=r||i<0||j>=c||j<0||land[i][j]==1||track[i][j]==m)
            return;
        if(i==r-1) {
            t=1; return;
        }
        track[i][j]=m;
        dfs(land,track,i+1,j);
        if(t) return;
        dfs(land,track,i-1,j);
        if(t) return;
        dfs(land,track,i,j+1);
        if(t) return;
        dfs(land,track,i,j-1);
    }
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
       r=row;
       c=col;
        vector <vector<int>>land(row,vector<int>(col,0));
        int n=cells.size();
        vector<int>fr;
        for(int i=0;i<col;i++) fr.push_back(i);
        int g=0;
        m=0;
        vector <vector<int>>track(row,vector<int>(col,0));
        for(int i=0;i<n;i++){
            int a=cells[i][0]-1,b=cells[i][1]-1;
            land[a][b]=1;

            if(a==0){
                if(b==c-1)g=i;
                int y=fr.size(),x=0;
                while(x<y){
                    if(fr[x]==b) {
                        fr.erase(fr.begin()+x);
                        break;
                    }
                    x++;
                }
            }
            int l=fr.size();
            for(int j=0;j<l;j++){
                m++;
                t=0;
                dfs(land,track,0,fr[j]);
                if(t) break;
            }
            if(!t) return i;
        }
        return g;
    }
};