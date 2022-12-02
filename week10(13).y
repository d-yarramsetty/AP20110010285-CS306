%{
#include <ctype.h>
#include<stdio.h>
#include<stdlib.h>
%}
%token digit
%%
S: E {printf("Reached\n\n"); getch();}
;
E: E '+' T
| E '-' T
| T
;
T: T '*' P
| T '/' P
| P
;
P: F '^' P
| F
;
F: '(' E ')'
| digit
;
%%
int main()
{
printf("Enter infix expression: ");
yyparse();
}
int yyerror(s)
char *s;
{
printf("Error");
getch();
}
Lex file:
%{
#include <stdio.h>
#include "y.tab.h"
extern int yylval;
%}
%%
[0-9]+ {
yylval=atoi(yytext);
return (digit);
}
[\t];
[\n] return 0;
.return yytext[0];
%%
int yywrap(){
return 1;
}