int limpaEspacos (char s[]){
    int i,j=0,r=0;
    for(i=0;s[i]!='\0';i++)
        if(!isspace(s[i]) || !isspace(s[i+1])){
            s[j]=s[i];
            j++;
            r++;
        }
    s[j]='\0';
    return r;
}
