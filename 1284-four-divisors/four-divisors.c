void divide(int n,int *s){
    if(n<6) return;
    int c=2,m=1+n;
    int t=sqrt(n);
    for(int i=2;i<=t;i++){
        if(n%i==0){
            int d=n/i;
            if(d==i){
                 m+=i;c++;
            }
            else{
                m=m+i+d;
                c+=2;
            }
        }
        if(c>4) return;
    }
    if(c==4) *s+=m;
}

int sumFourDivisors(int* nums, int n) {
    int s=0;
    for(int i=0;i<n;i++){
        divide(nums[i],&s);
    }
    return s;
}