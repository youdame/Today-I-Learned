%{
#include<stdio.h>
%}

decimal [1-9][0-9]*
octal 0[0-7]+
hexadecimal 0x[0-9A-F]+

%%
0 |;
{decimal} printf("Decimal number\n");
{octal} printf("Octal number\n");
{hexadecimal} printf("Hexadecimal number\n");
[\n\t] ;
.* printf("Error\n");

%%
int main(){
  while(yylex() != 0);
  return 0;
}

int yywrap(){
  return 1;
}