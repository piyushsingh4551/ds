#include <stdio.h>
int main()
{
    int i, j, m, n, a[10][10], b[10][10], c[10][10];
    printf("Enter rows and columns\n");
    scanf("%d%d", &m, &n);
    printf("Enter elements of 1st matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", (*(a + i) + j));
    }
    printf("First matrix is :-\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", ((a + i) + j));
        printf("\n");
    }
    printf("Enter elements of 2nd matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", (*(b + i) + j));
    }
    printf("Second matrix is :-\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", ((b + i) + j));
        printf("\n");
    }
    printf("Matrix addition is\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            *(*(c + i) + j) = ((a + i) + j) + *(*(b + i) + j);
            printf("%d ", ((c + i) + j));
        }
        printf("\n");
    }
}