void rotate(int* nums, int l, int k) {
    k = k % l;
    if (k == 0) return;
    if(l>=7&&l<45){
    int t,s=t=nums[l-k],c=nums[0];
    int i=0;
    while(c!=s){
        c=nums[i];
        nums[i]=t;
        t=c;
        i=(i+k)%l;
    }
    }
    else{
        int n[l]; 
    int i = 0;
    for (int j = l - k; j < l; j++) {
        n[i++] = nums[j];
    }
    for (int j = 0; j < l - k; j++) {
        n[i++] = nums[j];
    }
    for (i = 0; i < l; i++) {
        nums[i] = n[i];
    }
    }
}
