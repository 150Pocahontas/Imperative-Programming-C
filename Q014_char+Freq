
int quantasvezes(char s[], char c){
	int i,n=0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]==c) n++;
	}
	return n;
}
char charMaisfreq (char s[]) {
	int i,a=0,n=0;
	char c;
	if(s[0]=='\0') return 0;
	for(i=0;s[i]!='\0';i++){
		a = quantasvezes(s,s[i]);
		if(a>n){
			n=a;
			c=s[i];
		}
	}
	return c;
}
