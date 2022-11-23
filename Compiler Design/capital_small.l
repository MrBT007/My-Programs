%{
    #include<stdio.h>
    int capital = 0;
    int small = 0;    
%}

%%
[A-Z] {capital++;}
[a-z] {small++;}
%%

void main()
{
    yylex();
    printf("Captials: %d\n",capital);
    printf("Smalls: %d\n",small);
}
