%{
#include <stdio.h>
%}

digit [0-9]

%%
0           printf("zero\n");
{digit}+    printf("positive number\n");
-{digit}+   printf("negative number\n");
[\t\n]      ;
.*          printf("error\n");
%%

int main(){
  while (yylex() !=0);
  return 1;
}

int yywrap(){
  return 1;
}
