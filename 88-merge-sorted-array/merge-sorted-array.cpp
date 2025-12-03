class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        if(n==0) return;
        int k=m+n-1,i=m-1,j=n-1;
        while(j>=0){
            if(i>=0&&n1[i]>n2[j]) n1[k--]=n1[i--];
            else n1[k--]=n2[j--];
        }
    }
};