#include <stdio.h>
int yyerror(const char* s)
{
printf("%s\n", s); // 큰 따옴표로 변경
return 0;
}