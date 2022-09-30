#include <stdio.h>
#include <string.h>
#define size 20
int top = -1;
char stack[size];

char push(char ch)
{
    if (top == (size - 1))
        printf("Stack is Overflow\n");
    else
        stack[++top] = ch;
}
char pop()
{
    if (top == -1)
        printf("Stack is Underflow\n");
    else
        return stack[top--];
}
int main()
{
    char str[100];
    printf("Enter the string : \n");
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        push(str[i]);
    }
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = pop();
    }
    printf("Reversed string is : %s",str);
}