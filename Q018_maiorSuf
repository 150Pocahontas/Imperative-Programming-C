int maiorSufixo (char s1 [], char s2 []) {
    int i,j,n=0;
    for(i=0;s1[i+1]!='\0';i++);
    for(j=0;s2[j+1]!='\0';j++);
    while(s1[i]==s2[j]){
        j--;
        i--;
        n++;
    }
    return n;
}
