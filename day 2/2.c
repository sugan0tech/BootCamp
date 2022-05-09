#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    int arr[25] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5};
    printf("\nEnter the number to search and get the count :");
    scanf("%d", &n);
    for (int i = 0; i < 25; i++)
    {
        if (arr[i] == n)
        {
            printf("The number is present\n");
            for (int j = i; j < 25; j++)
            {
                if (arr[j] == n)
                    count++;
            }
            printf("\nCount of the number : %d\n", count);
            goto out;
        }
    }
    printf("\nThe number is not found\n");
out:
    printf("");

    return 0;
}