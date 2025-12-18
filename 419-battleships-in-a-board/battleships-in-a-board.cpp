class Solution {
public:
    bool issafe(int i,int j,int &r,int &c){
        return(i<0||j<0||i>=r||j>=c);
    }
    void dfs(vector<vector<char>>&g,int &r,int &c,int i,int j){
        if(issafe(i,j,r,c)||g[i][j]=='.') return;
        g[i][j]='.';
        dfs(g,r,c,i-1,j);
        dfs(g,r,c,i+1,j);
        dfs(g,r,c,i,j-1);
        dfs(g,r,c,i,j+1);
    }
    int countBattleships(vector<vector<char>>& board) {
        int r=board.size(),c=board[0].size();
        int t=0;
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                if(board[i][j]=='X'&&++t) dfs(board,r,c,i,j);
        return t;
    }
};