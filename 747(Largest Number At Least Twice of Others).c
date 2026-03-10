int dominantIndex(int* nums, int n) {
    int maxn=-1,max2=-1,i=0,idx;
    while(i<n){
        if(nums[i]>maxn){
            
            max2=maxn;
            maxn=nums[i];
            idx=i;
            
        }
        else if(max2<nums[i]){
            max2=nums[i];
            
        }
        i++;
    }
    if(maxn<(max2*2)){
        return-1;
    }
    return idx;    
}
