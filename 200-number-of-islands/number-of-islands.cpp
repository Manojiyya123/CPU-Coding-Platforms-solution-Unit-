class Solution {
public:
    bool issafe(int i,int j,int &r,int &c){
        return(i<0||j<0||i>=r||j>=c);
    }
    void dfs(vector<vector<char>>&g,int &r,int &c,int i,int j){
        if(issafe(i,j,r,c)||g[i][j]=='0') return;
        g[i][j]='0';
        dfs(g,r,c,i-1,j);
        dfs(g,r,c,i+1,j);
        dfs(g,r,c,i,j-1);
        dfs(g,r,c,i,j+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size(),c=grid[0].size();
        int t=0;
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                if(grid[i][j]=='1'&&++t) dfs(grid,r,c,i,j);
        return t;
    }
};