#include<stdio.h>

int main(){
	FILE *p;
	char c[200],f='a';
	p=fopen("dfa.txt","r");
	while((fscanf(p,"%s",c))!=EOF){
		
	}
int i;
for(i=0;c[i]!='\0';i++)
{
switch(f)
{
case 'a':
if(c[i]=='0'||c[i]=='1'||c[i]=='2'||c[i]=='3'||c[i]=='4'||c[i]=='5'||c[i]=='6'||c[i]=='7'||c[i]=='8'||c[i]=='9')
f='a';
else if(c[i]=='.')
f='b';
else
f='e';
break;
case 'b':
if(c[i]=='0'||c[i]=='1'||c[i]=='2'||c[i]=='3'||c[i]=='4'||c[i]=='5'||c[i]=='6'||c[i]=='7'||c[i]=='8'||c[i]=='9')
f='c';
else
f='e';
break;
case 'c':
if(c[i]=='0'||c[i]=='1'||c[i]=='2'||c[i]=='3'||c[i]=='4'||c[i]=='5'||c[i]=='6'||c[i]=='7'||c[i]=='8'||c[i]=='9')
f='c';
else 
f='e';
break;
case 'e':
f='e';
break; 
}
}
if(f=='c'||f=='a')
printf("String is accepted");
else
printf("String is not accepted");
return 0;
}
