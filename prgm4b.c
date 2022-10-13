#include <stdio.h>
//string reverse
int main()
{
    char p[11];
    char *s = p;
    printf("Enter string \n");
    scanf("%s", s);

    int i = 0, len = 0;
    char temp;
    while (*(s + len) != '\0')
        len++;

    for (i = 0; i < len / 2; i++)
    {
        temp = *(s + i);
        *(s + i) = *(s + len - 1 - i);
        *(s + len - 1 - i) = temp;
    }

    printf("Reversed string is %s", s);
}