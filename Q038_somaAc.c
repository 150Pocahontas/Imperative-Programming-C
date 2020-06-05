void somasAc (int v[], int Ac [], int N){
   int i,a=0;
   for(i=0;i<N;i++){
       Ac[i] = v[i] + a;
       a= Ac[i];
   }
}
