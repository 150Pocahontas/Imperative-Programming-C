int minInd (int v[], int n) {
   int i,r=0,a=v[0];
   for(i=0;i<n;i++)
        if(v[i]<a){ 
            r=i;
            a=v[i];
        }
   return r;
}
