int maxCresc (int v[], int N) {
	int r= v[0], i, c=1, f = 0;
	for (i=0;i<N;i++){
		if(v[i]<=v[i+1]) c++;
		else{
		    if(c>f) f=c;
		    c=1;
		}
	}
	return f;
}
