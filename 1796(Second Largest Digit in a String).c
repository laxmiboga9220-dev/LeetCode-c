int secondHighest(char* s) {
    int i=0,max=-1,max2=-1;
    while(i<strlen(s)){
        
        if(s[i]>='0'&&s[i]<='9'){
            int val=s[i]-48;
            if(val==max||val==max2){
                i++;
                continue;
            }
            if(val>max){
                max2=max;
                max=val;
            }
            else if(val>max2){
                max2=val;
            }
            
        }
        i++;
    }
    //if(max2==-1)return -1;
    return max2;
    
}
