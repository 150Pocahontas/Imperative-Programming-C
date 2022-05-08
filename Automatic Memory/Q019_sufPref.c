int sufPref (char s1[], char s2[]) {
    int i=0,j,n,p;
    for(j=0;s1[j]!='\0';j++){
        if(s1[j]==s2[i]){
            p=j;
            while(s1[p]==s2[i] && s1[p]!='\0'){
                n++;
                i++;
                p++;
            }
        }
        if(s1[p]=='\0') return n;
        n=0;
        i=0;    
    }
    return 0;
}
