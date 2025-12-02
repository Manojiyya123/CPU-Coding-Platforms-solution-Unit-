class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        vector<int>c,r;
        int m=mat.size(),n=mat[0].size();
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(mat[i][j]==0){
                    r.push_back(i);
                    c.push_back(j);
                }
        for(int i=0;i<r.size();i++)
            for(int j=0;j<n;j++)
                mat[r[i]][j]=0;
        for(int i=0;i<c.size();i++)
            for(int j=0;j<m;j++)
                mat[j][c[i]]=0;   
    }
};