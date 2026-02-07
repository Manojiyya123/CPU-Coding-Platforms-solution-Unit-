class Solution {
public:
    int minimumDeletions(string s) {
        int l=s.length();
        int a[l],b[l];
        int ca=0,cb=0,j=l-1,m=l;
        for(int i=0;i<l;i++){
            b[i]=cb;a[j]=ca;
            if(s[i]=='b')cb++;
            if(s[j--]=='a')ca++;
           
        }
        /*for(int i=0;i<l;i++){
            cout<<b[i];
        }
        cout<<endl;
        for(int i=0;i<l;i++){
            cout<<a[i];
        }*/
        for(int i=0;i<l;i++)
            m=a[i]+b[i]<m?a[i]+b[i]:m;
        return m;
    }
};