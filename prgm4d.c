#include <stdio.h>
//string compare
int main()
{
    char p[11], q[11];
    char *s1 = p;
    char *s2 = q;

    printf("Enter string 1 \n");
    scanf("%s",s1);
    printf("Enter string 2 \n");
    scanf("%s",s2);

    int len1 = 0, len2 = 0, i;
    while (*(s1 + len1) != '\0')
        len1++;
    while (*(s2 + len2) != '\0')
        len2++;

    if (len1 == len2)
    {
        for (i = 0; i < len1; i++)
        {
            if (*(s1 + i) == *(s2 + i))
                continue;
            else
                break;
        }
        if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
            printf("Strings match\n");
        else
            printf("Strings do not match\n");
    }
    else
        printf("Strings do not match\n");
}