%{

#include <stdio.h>
#include <stdlib.h>
enum tnumber { TEOF };
%}

letter	[a-zA-Z_]
digit	[0-9]

%%
Mega- 			yymore(); //출력X. yytext에 저장
Kludge 			ECHO; //인식 후 yytext의 값 출력
Foobar 			yyless(3); ECHO; //앞의 Foo(3글자)만 yytext에 남겨두고 나머지 입력스트림으로. ECHO로 Foo 출력(yytext)
bar 			ECHO;
[a-z]+ 			printf("IDENT\n");
. 				printf("%s", yytext);
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