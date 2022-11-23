%{
    #include<stdio.h>
    int positive = 0;
    int negative = 0;
    int posfrac = 0;
    int negfrac = 0;    
%}

%%

[-][0-9]+ {negative++;}
[+]?[0-9]+ {positive++;}
[+]?[0-9]*\.[0-9]+ {posfrac++;}
[-][0-9]*\.[0-9]+ {negfrac++;}

%%

void main()
{
    yylex();
    printf("Positive : %d\n",positive);
    printf("Negative : %d\n",negative);
    printf("Positive Fraction : %d\n",posfrac);
    printf("Negative Frac : %d\n",negfrac);
}