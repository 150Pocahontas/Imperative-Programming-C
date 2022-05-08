int dif(char s[], char c){
	int i,n=0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]!=c){
			c=s[i];
			n++;
		}
		else return n;
	}
}

int difConsecutivos(char s[]) {
	int i,a=0,n=0;
	for(i=0;s[i]!='\0';i++){
		a = dif(s+i,s[i+1]);
		if(a>n){
			n=a;
		}
	}
	return n;
}
