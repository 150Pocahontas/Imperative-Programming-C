int quantasvezesC(char s[], char c){
	int n=0;
	while(s[n]==c) n++;
	return n;
}

int iguaisConsecutivos(char s[]) {
	int i,a=0,n=0;
	for(i=0;s[i]!='\0';i++){
		a = quantasvezesC(s+i,s[i]);
		if(a>n){
			n=a;
		}
	}
	return n;
}
