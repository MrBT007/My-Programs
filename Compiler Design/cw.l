%{
	#include<stdio.h>
	#include<string.h>
	int word = 0;
	int line = 1;
%}

%%
([a-zA-Z0-9])*    {word++;}
\n		{line++;}
%%

void main()
{
	yyin=fopen("output.txt","r");
	yylex();
	printf("Statistics\n");
	printf("Word: %d\nLine: %d\n", word, line);
}