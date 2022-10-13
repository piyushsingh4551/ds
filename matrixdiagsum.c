#include <stdio.h>
int main()
{
    int i, j, m, n, a[10][10],sum=0;
    printf("Enter rows and columns\n");
    scanf("%d%d", &m, &n);
    
    printf("Enter elements of  matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", (*(a + i) + j));
    }
    printf("First matrix is :-\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", *(*(a + i) + j));
        printf("\n");
    }
    
    printf("diagonal sum is\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i==j)
            sum+=*(*(a + i) + i);
            
        }
    }
        printf("%d",sum);
    
}