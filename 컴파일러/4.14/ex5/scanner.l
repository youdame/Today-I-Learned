%{

#include <stdio.h>
#include <stdlib.h>
enum tnumber { TEOF };
%}

digit	[1-9][0-9]*
octal   0[0-7]+
hex     0x[0-9A-Fa-f]+

%%
0               |
{digit}         printf("Decimal number\n");
{octal}         printf("Octal digits\n");
{hex}           printf("Hexadecimal\n");
[ \t\n]			;
.*				printf("Error\n");
%%

void main()
{
	enum tnumber tn;  // token number
	while ((tn = yylex())!= TEOF){
	}
}

int yywrap()
{
	return 1;
}