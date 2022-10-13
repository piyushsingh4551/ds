#include <stdio.h>
//string append means add two string
int main()
{
    char p[11], q[11];
    char *s1 = p;
    char *s2 = q;
    printf("Enter string 1\n");
    scanf("%s", s1);

    printf("Enter string 2\n");
    scanf("%s", s2);

    int i = 0, j = 0;
    while (*(s1 + i) != '\0')
        i++;

    while (*(s2 + j) != '\0')
    {
        *(s1 + i) = *(s2 + j);
        i++, j++;
    }

    printf("Appended string is \n");
    *(s1 + i) = '\0';
    printf("%s", s1);
}