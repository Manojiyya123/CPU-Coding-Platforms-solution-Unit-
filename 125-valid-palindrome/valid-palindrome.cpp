class Solution {
public:
    bool isPalindrome(string s) {
        int j=s.size()-1,i=0;
        for(int k=0;k<=j;k++){
            if(s[k]<='z'&&s[k]>='a')s[k]-=32;
        }
        while(i<j){
            int a=0,b=0;
            if(s[i]>='A'&&s[i]<='Z'||s[i]>=48&&s[i]<=57) a=1;
            if(s[j]>='A'&&s[j]<='Z'||s[j]>=48&&s[j]<=57) b=1;
            if(a*b){
                if(s[i]!=s[j]) return false;
                i++;j--;
            }
            if(!a)i++;
            if(!b)j--;
        }
        return true;
    }
};