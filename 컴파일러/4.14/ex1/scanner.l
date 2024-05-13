%{
#include <stdio.h>
%}

letter	[a-zA-Z_]
digit	[0-9]

%%
int 				printf("\nINT");
"{" 				printf("\nBEGIN");
"}" 				printf("\nEND");
"\n" 				printf("NL");
[\t]										;
. 					printf("(%s)", yytext);
%%

int main()
{
	while ((yylex())!= 0){
	}
	return 0;
}

int yywrap()
{
	return 1;
}