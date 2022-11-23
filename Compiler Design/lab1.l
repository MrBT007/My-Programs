%{
#include <ctype.h>
#include<stdio.h>
#include<string.h>

char surname [] = "bhut";

char name [] ="tushar";

int count = 0;

%}

%%
[a-zA-Z]+ {
    // int j = 0;
    
    // char str[] = yytext;
    // while (str[j]) {
    //     str[j] = tolower(str[j]);
    //     j++;
    // }
    if(strcmp(yytext, name)==0){
        count++;
        fprintf(yyout, "%s", surname);
        }
    else
        fprintf(yyout, "%s", yytext);}
.   fprintf(yyout, "%s", yytext);

%%

int yywrap()
{
    return 1;
}

int main()
{
    extern FILE *yyin, *yyout;
    yyin=fopen("imput.txt", "r");
    yyout=fopen("output.txt", "w");
    yylex();
    printf("tushar was found: %d times\n", count);
}