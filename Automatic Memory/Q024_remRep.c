int remRep (char s[]) {
    int i,r=0,j = 0;
    for(i=0;s[i]!='\0';i++) 
        if(s[i] != s[i-1]){
            s[j] = s[i];
            j++;
            r++;
        }
    s[j]='\0';
    return r;
}
