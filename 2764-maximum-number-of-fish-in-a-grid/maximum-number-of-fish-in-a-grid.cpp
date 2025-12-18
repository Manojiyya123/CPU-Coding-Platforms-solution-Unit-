class Solution {
public:
    bool issafe(int i,int j,int &r,int &c){
        return(i<0||j<0||i>=r||j>=c);
    }
    void dfs(vector<vector<int>>&g,int &r,int &c,int i,int j,int &t){
        if(issafe(i,j,r,c)||g[i][j]<=0) return;
        t+=g[i][j];
        g[i][j]=0;
        dfs(g,r,c,i-1,j,t);
        dfs(g,r,c,i+1,j,t);
        dfs(g,r,c,i,j-1,t);
        dfs(g,r,c,i,j+1,t);
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int r=grid.size(),c=grid[0].size();
        int m=0;
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++){
                if(grid[i][j]>0){
                    int t=0;
                    dfs(grid,r,c,i,j,t);
                    m=t>m?t:m;
                }
            }
        return m;
    }
};