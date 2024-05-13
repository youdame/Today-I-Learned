%{

#include <stdio.h>
#include <stdlib.h>
enum tnumber { TEOF };
%}

letter	[a-zA-Z_]
digit	[0-9]

%%
int				printf("\nINT");
"{"				printf("\nBEGIN");
"}"				printf("\nEND");
[ \n\t]          ;
.				printf("(%s)", yytext);
%%

void main()
{
	enum tnumber tn;  // token number
	while ((tn = yylex())!= TEOF){
	}
}

int yywrap() // 이 부분 꼭 써줘야 한다. flex 돌릴때는 괜찮지만 에러 발생!
{
	return 1;
}