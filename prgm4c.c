#include <stdio.h>
//string copy
int main()
{
    char p[11], q[11];
    char *s1 = p;
    char *s2 = q;
    printf("enter string ");
    scanf("%s", s1);
    int i = 0;
    while (*(s1 + i) != '\0')
    {
        *(s2 + i) = *(s1 + i);
        i++;
    }
    *(s2 + i) = '\0';
    printf("copied string s2 is %s", s2);
}