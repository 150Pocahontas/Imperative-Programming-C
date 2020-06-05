int retiraNeg (int v[], int N){
       int i,j=0,r = -1;
       for(i=0;i<N;i++) 
            if(v[i]>=0)
                v[j++]=v[i];
       return j;
   }
