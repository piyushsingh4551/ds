#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
double compute(char c,double op1,double op2)
{
switch(c)
{
case '+' : return op1+op2;
case '-' : return op1-op2;
case '*' : return op1*op2;
case '/' : return op1/op2;
case '$' :
case '^' : return pow(op1,op2);
default : printf("Invalid Input\n");
return 0;
}
}
int main()
{
double s[50],op1,op2,res;
char postfix[50],symbol;
int top=-1,i;
printf("Enter the postfix\n");
scanf("%s",postfix);
for(i=0;i<strlen(postfix);i++)
{
symbol = postfix[i];
if(isdigit(symbol))
s[++top] = symbol - '0';
else
{
op2 = s[top--];
op1 = s[top--];
res = compute(symbol,op1,op2);
s[++top] = res;
}

}
printf("Result\t: %lf\n",res);
return 0;
}