%{

#include <stdio.h>
%}

letter	[a-zA-Z_]
digit	[0-9]

%%
abc             ECHO;
def             ECHO;
Mega- 			yymore();
Kludge 			printf("%s\n", yytext);
Foobar 			yyless(3);
bar 			ECHO;
[a-z]+ 			printf("ident");
[\n\t]          ;
. 				;
%%


int main()
{
	printf("Start of Program\n");
	while (yylex()!= 0);
	return 1;
}

int yywrap()
{
	printf("\nEnd of Program\n");
	return 1;
}