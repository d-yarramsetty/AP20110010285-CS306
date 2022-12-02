%s B C D
 
%%
<INITIAL>1 BEGIN INITIAL;
<INITIAL>0 BEGIN B;
<INITIAL>\n BEGIN INITIAL; printf("String is not accepted.");
 
<B>1 BEGIN D;
<B>0 BEGIN C;
<B>\n BEGIN INITIAL; printf("String is not accepted.");
 
<C>0 BEGIN C;
<C>1 BEGIN D;
<C>\n BEGIN INITIAL; printf("String is accepted.");
 
<D>0 BEGIN B;
<D>1 BEGIN D;
<D>\n BEGIN INITIAL; printf("String is not accepted.");
%%
 
main() {
  printf("Enter a string: ");
  yylex();
}
