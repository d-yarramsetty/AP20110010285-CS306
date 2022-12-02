#include <stdio.h>

int main(){
	FILE *fp;
	fp=fopen("lex.txt","w");
	fprintf(fp,"This file is created 45.");

	fclose(fp);
}

