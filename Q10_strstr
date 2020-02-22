char *mystrstr(char s1[], char s2[]) {
    int i,j;
    for(i=0;s1[i]!='\0';i++)
            for(j=0;s2[j]==s1[i+j];j++)
                    if(s2[j+1]=='\0') return (s1 + i);
    if(s2[0]=='\0') return s1;
    return NULL;
}
