%{

#include <stdio.h>
%}

digit	[0-9]

%%
0               printf("zero\n");
{digit}+        |
"+"{digit}+     printf("positive number\n");
"-"{digit}+     printf("negative number\n");
[ \t\n]			;
.*				printf("error\n");
%%

int main() {
    while (yylex() != 0);  // yylex가 0을 반환할 때까지 계속 호출
    return 0;
}

int yywrap()
{
	return 1;
}