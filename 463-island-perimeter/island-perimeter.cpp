class Solution {
public:
    int r,c,t=0;
    bool issafe(int i,int j,int &r,int &c){
        return(i<0||j<0||i>=r||j>=c);
    }
    void dfs(vector<vector<int>>&g,int i,int j){
        if(issafe(i,j,r,c)||g[i][j]==0) {
             t++;
            return;}
       if(g[i][j]==2) return;
        g[i][j]=2;
        dfs(g,i-1,j);
        dfs(g,i+1,j);
        dfs(g,i,j-1);
        dfs(g,i,j+1);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        r=grid.size(),c=grid[0].size();
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    dfs(grid,i,j);
                    return t;
                }
            }
        return t;
    }
};