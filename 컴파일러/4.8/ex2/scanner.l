%{

#include <stdio.h>
#include <stdlib.h>
enum tnumber { TEOF };
%}

letter	[a-zA-Z_]
digit	[0-9]

%%
int				printf("integer");
"{"				printf("begin");
"}"				printf("end");
.				printf("%s", yytext);
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