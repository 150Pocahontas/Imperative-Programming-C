int eRep(int v[],int N,int a){
    int i;
    for(i=0;i<N;i++){
        if(v[i]==a) return 1;
    }
    return 0;
}

int elimRep (int v[], int N) {
    int i,j=0;
    for(i=0;i<N;i++)
        if(!eRep(v,i,v[i])){
            v[j]=v[i];
            j++;
        }
    return j;
}
