%{

#include <stdio.h>
#include <stdlib.h>
enum tnumber { TEOF };
%}

letter	[a-zA-Z_]
digit	[0-9]

%%
abc             ECHO;
def             ECHO;
Mega- 			yymore();
Kludge 			printf("%s\n", yytext);
Foobar 			ECHO; yyless(3);
bar 			ECHO;
[a-z]+ 			printf("ident");
[\n\t]          ;
. 				;
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