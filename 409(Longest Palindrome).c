struct hash{
    int key;
};
int longestPalindrome(char* s) {
    struct hash htable[256]={0};
    int i=0,len=strlen(s);
    while(i<len){
        int idx=(int)s[i];
        htable[idx].key=htable[idx].key+1;
        i++;
    }
    int c=0,f=0;
    i=0;
    while(i<len){
       int idx=(int)s[i];
        if(htable[idx].key%2==0){
            c=c+htable[idx].key;
            htable[idx].key=0;
            
        }else{
            f=1;
            c=c+htable[idx].key-1 ;                  
           
            htable[idx].key=0 ;      
        }i++;
    }
    if(f==0)return c;           
    return c+1;
}
