int isVogal(char s){
	if(s=='a'||s=='e'|| s=='i'||s=='o'||s=='u')
		return 1;
	if(s=='A'||s=='E'|| s=='I'||s=='O'||s=='U')
		return 1;
	return 0;
}
int contaVogais (char s[]) {
    int n=0,i;
    for(i=0;s[i]!='\0';i++)
        if(isVogal(s[i])) n++;
    return n;
}
