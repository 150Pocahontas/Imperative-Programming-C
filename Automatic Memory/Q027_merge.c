void merge (int r [], int a[], int b[], int na, int nb){
    int i=0,j=0,k;
    for(k=0;k<nb+na;k++) 
    if(a[i]<=b[j] && i<na || j==nb) r[k]=a[i++];
        else r[k]=b[j++];
}
