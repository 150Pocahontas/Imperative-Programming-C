void insere (int s[], int N, int x){
    int i,j=0,c=1;
    int v[N];
    for(i=0;i<N;i++) v[i]=s[i];
    for(i=0;i<N;i++){
        if(s[i]>x && c!=0){
            s[j] = x;
            j++;
            c=0;
        }
        s[j]=v[i];
        j++;
    }
}
