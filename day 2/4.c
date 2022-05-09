#include <stdio.h>

int main()
{

    int n;
    printf("Enter the size of matrix :");
    scanf("%d", &n);
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i > 0 && j > 0) && (j < n - 1 && i < n - 1))
                printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}