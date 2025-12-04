int countCollisions(char* s) {
    int i=1,c=0,r=0;
    while(s[i]!='\0'){
        if(s[i]=='R'&&s[i-1]=='R'){
            c++;r++;
        }
        else if(s[i]=='L'){
            switch(s[i-1]){
                case 'R': c+=2; s[i]='S'; break;
                case 'S': c++; s[i]='S'; break;
            }
            r=0;
        }
        else if(s[i]=='S'){
            switch(s[i-1]){
                case 'R' : c++; break;
            }
            r=0;
        }
        i++;
    }
    return r==0?c:c-r;
}