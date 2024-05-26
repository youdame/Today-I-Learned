%{
#include <stdio.h>
#include <stdlib.h>
#include "tn.h" // bison에서 생성된 헤더 파일 포함


#define YY_DECL int yylex(void) // yylex 함수 선언 추가
%}

%option yylineno  
%option reentrant
letter	[a-zA-Z_]
digit	[0-9]

%%
begin				return(TBEGIN);
end					return(TEND);
{letter}({letter}|{digit})*	return(TIDENT);
":="				return(TASSIGN);
"+"				return(TADD);
{digit}+			return(TNUM);
";"				return(TSEMI);
\.				return(TDOT);
[ \t\n]				;
.				return(TERROR);
%%

int yywrap()
{
    return 1;
}