#include <stdio.h>

int main(){
	FILE *fp;
	FILE *f;
	fp=fopen("lex.txt","r");
	f=fopen("lexical.txt","w");
	
	char c=fgetc(fp);
	
	while(c!=EOF){
		fputc(c,f);
		c=fgetc(fp);
	}
	fclose(fp);
	fclose(f);
	
}

