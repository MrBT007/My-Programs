#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define SIZE 100
struct Stack
{
    int top;
    unsigned capacity;
    int *array;
};

struct Stack *makeStack(int capacity)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));

    if (!stack)
        return NULL;

    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));

    if (!stack->array)
        return NULL;

    return stack;
}

int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

char peek(struct Stack *stack)
{
    return stack->array[stack->top];
}

char pop(struct Stack *stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top--];
    return '$';
}

void push(struct Stack *stack, char op)
{
    stack->array[++stack->top] = op;
}

int calculatePostfix(char *expression)
{
    struct Stack *stack = makeStack(strlen(expression));
    int i;

    if (!stack)
        return -1;

    for (i = 0; expression[i]; ++i)
    {
        if (isdigit(expression[i]))
            push(stack, expression[i] - '0');
        else
        {
            int val1 = pop(stack);
            int val2 = pop(stack);
            switch (expression[i])
            {
            case '+':
                push(stack, val2 + val1);
                break;
            case '-':
                push(stack, val2 - val1);
                break;
            case '*':
                push(stack, val2 * val1);
                break;
            case '/':
                push(stack, val2 / val1);
                break;
            }
        }
    }
    return pop(stack);
}

int main()
{
    char expression[SIZE];
    printf("Enter Postfix Expression : ");
    gets(expression);
    printf("The Postfix Evaluation : %d", calculatePostfix(expression));
    return 0;
}