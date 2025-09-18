int lengthOfLongestSubstring(char* s) {
    int c[256]={0},m=0,k=0;
    for(int i=0;s[i]!='\0';i++) {
            k=c[s[i]]>k?c[s[i]]:k;
            c[s[i]]=i+1;
       int t=i-k+1;
        m=m<t?t:m;
    }
   return m;
}