#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array :");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = n - 1; i > 0; i = i - 2)
    {
        printf("\n%d", arr[i] + arr[i - 1]);
    }
    printf("\n%d", arr[0]);

    return 0;
}