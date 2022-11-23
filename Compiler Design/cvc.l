%{
    #include<stdio.h>
    int vowel = 0,consonant = 0;
%}

%%

a|A|e|E|I|i|o|O|u|U {vowel++;}
. {consonant++;}

%%

void main()
{
    printf("Enter String : ");
    yylex();
    printf("Vowel : %d\n",vowel);
    printf("Consonant : %d\n",consonant);
}