%{
	#include<stdio.h>
	int i;
%}

%%

[0-9]+	 {i=atoi(yytext);
		if(i%5==0)
			printf("Yes");
		else
		printf("No");}
%%

int yywrap(){}

int main()
{
	yylex();
	return 0;
}