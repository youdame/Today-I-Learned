%{

#include <stdio.h>
#include <stdlib.h>
enum tnumber { TEOF, TIDEN, TNUM, TASSIGN, TADD, TSEMI, TDOT, TBEGIN, TEND, TERROR };
%}

letter	[a-zA-Z_]
digit	[0-9]

%%
"const"	                return(TCONST);
"else"	                return(TELSE);
"if"	                  return(TIF);
"int"	                  return(TINT);
"return"	              return(TRETURN);
"void"	                return(TVOID);
"while"	                return(TWHILE);
"=="	                  return(TEQUAL);
"!="	                  return(TNOTEQU);
"<="	                  return(TLESSE);
">="	                  return(TGREATE);
"&&"	                  return(TAND);
"||"	                  return(TOR);
"++"	                  return(TINC);
"--"	                  return(TDEC);
"+="	                  return(TADDASSIGN);
"-="	                  return(TSUBASSIGN);
"*="	                  return(TMULASSIGN);
"/="	                  return(TDIVASSIGN);
"%="	                  return(TMODASSIGN);
";"	                    return(TSEMICOLON);
[A-Za-z_][A-Za-z0-9_]*  return(TIDENT);
[1-9][0-9]*|0([0-7]+|(x|X)[0-9A-Fa-f]*)?    return(tnumber);
"/*"([^*]\*+[^*/])*\**"*/"           ;
"//".*	;
[ \t\n] ;
.			return(yytext[0]);			                ;
%%

void main()
{
	enum tnumber tn;  // token number
	while ((tn = yylex())!= TEOF){
    switch(tn){
      case TBEGIN : printf("Begin\n"); break;
      case TEND : printf("End\n"); break;
      case TIDEN : printf("Identifier: %s\n", yytext); break;
      case TASSIGN : printf("Assignment_op\n"); break;
      case TADD : printf("Add_op\n"); break;
      case TNUM : printf("Number: %d\n", atoi(yytext)); break;
      case TSEMI : printf("Semicolon\n"); break;
      case TDOT : printf("Dot\n"); break;
      case TERROR : printf("Error: %c\n", yytext[0]); break;
    }
	}
}

int yywrap() // 이 부분 꼭 써줘야 한다. flex 돌릴때는 괜찮지만 에러 발생!
{
	return 1;
}