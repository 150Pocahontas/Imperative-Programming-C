int contaPal (char s[]) {
    int n=0,i;
    if(s[0]=='\0') return 0;
    if(!isspace(s[0])) n++;
    for(i=1;s[i]!='\0';i++)
        if(isspace(s[i-1]) && !isspace(s[i])) n++;
    return n;
}
