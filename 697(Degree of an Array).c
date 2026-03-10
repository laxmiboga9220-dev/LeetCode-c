struct hash{
    int key;
    int val;
    int st;
};
#define EMPTY 10000001
int findShortestSubArray(int* nums, int s) {
    if(s==1)return 1;
    int n=2*s;
    struct hash htable[n];
    
    int i,max=0,var,lenf;
    for(i=0;i<n;i++){
        htable[i].key=EMPTY;
        
    }
    i=0;
    while(i<s){
        int idx=((nums[i]%n)+n)%n;
        while(htable[idx].key!=EMPTY){
            if(htable[idx].val==nums[i]){
                htable[idx].key=++htable[idx].key;
                  break;           
            }
            
            idx=(idx+1)%n;
            
        }
        if(htable[idx].key==EMPTY){
            htable[idx].key=1;
            htable[idx].val=nums[i];
            htable[idx].st=i;
           // lenf=i-(htable[idx].st)+1;

        }
        if(htable[idx].key>max){
                    
            max=htable[idx].key;
            var=htable[idx].val;
            lenf=i-(htable[idx].st)+1;
                        
        }
        if(max==htable[idx].key){
            int len=i-(htable[idx].st)+1;
            if(len<lenf){
                lenf=len;
                var=htable[idx].val;
            }
        }
        i++;
    }  
    return lenf;
    
    
}
