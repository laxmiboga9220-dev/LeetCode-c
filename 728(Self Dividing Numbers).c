int* selfDividingNumbers(int l, int r, int* returnSize) {
    int f=1,j=0,rem,range=r-l+1;
    //int *res=malloc(range*sizeof(int));
    int i=l;
    while(i<=r){
        int temp=i;

        if(i%10!=0){
            while(temp>0&&f==1){
            
                rem=temp%10;
                if(rem==0){
                    f=0;
                    continue;
                }
                if(i%rem==0){
                    temp=(temp-(temp%10))/10;
                 }else{
                    f=0;
                }
            }
            if(f==1){
                returnSize[j]=i;
                j++;
            }
            f=1;

        }
        i++;
        
    }
    
    return returnSize;
}
