int menosFreq (int v[], int N){ //32
	int r= v[0], i, c=0, f = N;
	for (i=0;i<N;i++){
		if(v[i]==v[i+1]) c++;
		else{
		    if(c<f){
		       f=c;
		       r=v[i];
		    }
		    c=0;
		}
	}
	return r;
}
