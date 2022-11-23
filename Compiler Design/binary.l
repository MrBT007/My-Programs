%{
    #include<stdio.h>
    int one = 0;
    int zero = 0;
%}

%%
[0] {zero++;}
[1] {one++;}
%%

void main()
{
    yylex();
    printf("Number of 1's in binary = %d\n",one);
    printf("Number of 0's in binary = %d\n",zero);
}