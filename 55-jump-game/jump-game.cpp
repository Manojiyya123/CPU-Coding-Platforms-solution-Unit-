class Solution {
public:
    int n;
    bool checkJ(vector<int>&nums,vector <int> &f,int i){
        if(i==n-1) return true;
        else if(i>n-1||f[i]==1) return false ;
        f[i]=1;
        for(int j=1;j<=nums[i];j++)
            if(checkJ(nums,f,i+j)) return true;
        return false;
    }
    bool canJump(vector<int>& nums) {
        n=nums.size();
        vector<int>f(n,0);
        return checkJ(nums,f,0);

    }
};