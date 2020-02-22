int isVogal(char s){
	if(s=='a'||s=='e'|| s=='i'||s=='o'||s=='u')
		return 1;
	if(s=='A'||s=='E'|| s=='I'||s=='O'||s=='U')
		return 1;
	return 0;
}

void strnoV( char s[]) {
	int i,j=0;
	for(i=0;s[i]!='\0';i++){
		if(!isVogal(s[i])){
			s[j]=s[i];
			j++;
		}
	}
	s[j]='\0';
}
