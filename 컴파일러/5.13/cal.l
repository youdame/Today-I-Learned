%{
#include <stdio.h>
#include <stdlib.h>
#include "cal.tab.h" 
int yylex();
%}
%%
[a-z]* { return NAME; }
[0-9]+ { yylval = atoi(yytext); return NUMBER; } // NUMBER 패턴 변경
[\t] ;
\n return 0; // 큰 따옴표를 작은 따옴표로 변경
. return yytext[0];
%%
int yywrap()
{
return 1;
}
