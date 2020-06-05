int unionMSet (int N, int v1[N], int v2[N], int r[N]){
       int i;
       for(i=0;i<N;i++)
        if(v2[i] || v1[i]){
            if(v2[i]<v1[i]) r[i] = v1[i];
            else r[i] = v2[i];
        }
        else r[i]=0;
   }
