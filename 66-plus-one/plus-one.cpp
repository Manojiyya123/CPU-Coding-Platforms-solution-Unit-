class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int s=digits.size();
        int t=1;
        for(int i=s-1;i>=0;i--){
            int m=digits[i]+t;
            if(m==10){
                t=1;
                digits[i]=0;
            }
            else{
                t=0; digits[i]=m;
            }
        }
        if(t==0) return digits;
        digits.push_back(1);
        reverse(digits.begin(),digits.end()-1);
        reverse(digits.begin(),digits.end());
        return digits;
    }
};