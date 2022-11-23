%{
%}

start \/\* 
end \*\/

%%

\/\/(.*);
{start}.*{end};

%%

int main(int k, char **argcv)
{
    yyin = fopen("input.c","r");
    yyout = fopen("out.c","w");
    yylex();
    return 0;
}