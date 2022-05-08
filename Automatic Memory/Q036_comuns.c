int comuns (int a[], int na, int b[], int nb){
      int i,j,r=0;
      for(i=0;i<na;i++){
          for(j=0;a[i]!=b[j] && j<nb;j++);
            if(a[i]==b[j]) r++;
      }
      return r;
   }
