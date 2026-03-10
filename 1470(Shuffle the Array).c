int* shuffle(int* nums, int n1, int n, int* returnSize){
    //if(n1<3)return nums;
    int *res=malloc (n1*sizeof(int));
    int l=0,r=(n1/2),i=0;
    while(i<n1){
        if(i%2==0){
            res[i]=nums[l];
            l++;
        }else{
            res[i]=nums[r];
            r++;
        }
        
        i++;
    }
    *returnSize=n1;
        return res;

}
