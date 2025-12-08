int issst(int i,int n){
    int t=sqrt(i);
    if(t*t==i&&t<=n) return 1;
    return 0;
}
int countTri(int i,int p,int n,int c){
    if(p==n) return c;
    c=countTri(i,p+1,n,c);
    int t=i*i+p*p;
    if(issst(t,n)) c+=2;
    return c;
}
int countTriples(int n) {
    int c=0;
    for(int i=1;i<n;i++){
        c=countTri(i,i+1,n,c);
    }
   return c;
}