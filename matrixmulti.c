#include <stdio.h>
int main()
{
    int i, j, m,k, n,p,q, a[10][10], b[10][10], c[10][10],sum=0;
    printf("Enter rows and columns for 1st matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter rows and columns for 2nd matrix\n");
    scanf("%d%d", &p, &q);
    if(n!=p)
        printf("multiplication  not possible\n");
    
    else{
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
            printf("%d ", *(*(a + i) + j));
        printf("\n");
    }
    printf("Enter elements of 2nd matrix\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
            scanf("%d", (*(b + i) + j));
    }
    printf("Second matrix is :-\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
            printf("%d ", *(*(b + i) + j));
        printf("\n");
    }
   
    for (i = 0; i <m ; i++)
    {
        for (j = 0; j < q; j++)
        {
           for (k = 0; k < n;k++) {
            sum+= (*(*(a + i) + k)) * (*(*(b + k) + j));
         
        }
        *(*(c + i) + j)=sum;
       sum=0;
    }
    }
    printf("matrix multiplication is \n");
    for (i = 0; i <m ; i++)
    {
        for (j = 0; j < q; j++)
        {
           
            printf("%d\n", *(*(c + i) + j));
        }
        printf("\n");
    }
    }
}