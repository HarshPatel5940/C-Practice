// multiply 2 matrix
#include <stdio.h>         

int main()
{
    int a[100][100], b[100][100], c[100][100];
    int m, n, p, q, i, j, k;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d%d", &p, &q);
    if (n != p)
        printf("The matrices can't be multiplied with each other.\n");
    else
    {
        printf("Enter the elements of first matrix:");
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        printf("Enter the elements of second matrix:");
        for (i = 0; i < p; i++)
            for (j = 0; j < q; j++)
                scanf("%d", &b[i][j]); 

        for (i = 0; i < m; i++)

            for (j = 0; j < q; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < n; k++)
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        printf("The product of the matrices is:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
                printf("%d\t", c[i][j]);
            printf("");
        }
    }
    return 0;
}
