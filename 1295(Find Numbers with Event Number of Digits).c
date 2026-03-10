int findNumbers(int* nums, int n) {
    int i=0,count=0;
    while(i<n){
        int temp=nums[i],c=0;
        while(temp>0){
            temp=temp/10;
            c++;
        }
        if(c%2==0){
            count++;
        }
        i++;
    }
    return count;
    
}
