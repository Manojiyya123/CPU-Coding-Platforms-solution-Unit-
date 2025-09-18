bool judgeSquareSum(int c) {
    int b=sqrt(c);
    if(c==2) return true;
   for(int a=0;a<=b;a++){
    int r=c-(a*a);
    int t=sqrt(r);
    if(r==(t*t)) return true;
   }
   return false;
}