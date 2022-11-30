%{
#include<stdio.h>
int vowel=0;
int cons=0;
%}
%%
"a"|"e"|"i"|"o"|"u"|"A"|"E"|"I"|"O"|"U" {printf("Is a VOWEL\n");vowel++;}
[a-zA-z] {printf("Is a Consonant\n");cons++;}
%%
int yywrap()
{
return 1;
}
main()
{
printf("Enter the String\n");
yylex();
printf("vowel=%d and Consonent=%d",vowel,cons);
}