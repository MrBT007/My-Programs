%{
    #include<stdio.h>
    int isValid = 0;
%}

%%

[0-9]+[+/*-][0-9]+ {isValid = 1;}

%%

void main()
{
    yylex();
    if(isValid)printf("Is Valid\n");
    else printf("Is not Valid\n");
}