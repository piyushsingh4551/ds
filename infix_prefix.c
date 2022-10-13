#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ss 40
char infix[40], opStack[40], res[40];
int top;
/*
1. Implement Reverse function
2. Implment Stack function push and pop
3. function for postfix conversion
*/
void reverse(char *s, int begin, int end)
{
    char temp;
    if (begin >= end)
        return;
    while (begin < end)
    {
        temp = *(s + begin);
        *(s + begin) = *(s + end);
        *(s + end) = temp;
        ++begin;
        --end;
    }
}
void push(char x)
{
    if (top == ss - 1)
        printf("Stack is full\n");
    else
    {
        opStack[++top] = x;
    }
}
char pop()
{
    if (top == -1)
        printf("Stack is empty\n");
    else
    {
        return opStack[top--];
    }
}
void convert(char *infix)
{
    int i = 0, j = 0; // index for stack j , index for the char stream - i
    for (i = 0; infix[i] != '\0'; i++)
    {
        if (isdigit(infix[i]) || isalpha(infix[i]))
            res[j++] = infix[i];
        else
        {
            switch (infix[i])
            {
            case ')':
                push(infix[i]);
                break;
            case '(':
                while (opStack[top] != ')')
                    res[j++] = pop();
                pop();
                break;
            case '$':
            case '^':
                push(infix[i]);
                break;
            case '/':
            case '*':
                while (opStack[top] == '$' || opStack[top] == '^')
                    res[j++] = pop();
                push(infix[i]);
                break;
            case '+':
            case '-':
                while (opStack[top] == '$' || opStack[top] == '^' ||
                       opStack[top] == '*' || opStack[top] == '/')
                    res[j++] = pop();
                push(infix[i]);
                break;
            }
        }
    }
    while (top > -1)
        res[j++] = pop();
    res[j] = '\0';
    printf("Postfix Expression : %s", res);
    reverse(res, 0, strlen(res) - 1);
    printf("Prefix Expression : %s", res);
}
int main()
{
    top = -1;
    printf("Enter the infix\n");
    gets(infix);
    reverse(infix, 0, strlen(infix) - 1);
    convert(infix);
    return 0;
}
