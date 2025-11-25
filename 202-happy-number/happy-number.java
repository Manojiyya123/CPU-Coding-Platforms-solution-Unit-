class Solution {
    public int sosod(int n){
        int s=0;
        while(n!=0){
            int t=n%10;
            n/=10;
            s+=t*t;
        }
        return s;
    }
    public boolean isHappy(int n) {
        int s=sosod(n),f=sosod(sosod(n));
        while(f!=1){
            s=sosod(s);
            f=sosod(sosod(f));
            if(s==f) return false;
        }
        return true;
    }
}