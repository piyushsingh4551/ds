#include <stdio.h>
//string length
int main()
{
    char p[11];
    int i = 0;
    char *s = p;
    printf("enter string\n");
    scanf("%s",s);
    while (*(s + i) != '\0')
    {
        i++;
    }
    printf("length of string is %d", i);
}