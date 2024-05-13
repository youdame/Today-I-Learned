
%{
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h> // malloc.h 대신 stdlib.h를 사용
int yyerror(const char* s);
int yylex(void);
extern int yyparse();
%}
%token NAME NUMBER
%left '-' '+' // ASCII 따옴표로 변경
%left '*' '/' // ASCII 따옴표로 변경
%nonassoc UMINUS
%%
stat : NAME '=' expr
| expr { printf("=%d\n", $1); } // 큰 따옴표로 변경
;
expr : expr '+' expr { $$ = $1 + $3; }
| expr '-' expr { $$ = $1 - $3; }
| expr '*' expr { $$ = $1 * $3; }
| expr '/' expr { if ($3 == 0) yyerror("divide by zero");
else $$ = $1 / $3; }
| '-' expr %prec UMINUS { $$ = -$2; }
| NUMBER
;
%%
