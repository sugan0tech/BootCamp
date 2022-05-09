#include <stdio.h>

int main()
{
    int array[] = {20, 5, 6, 2, 9, 4, 89};
    int sub_min;
    int sub_max;
    int max;
    printf("\nEnter the sub Array min Index :");
    scanf("%d", &sub_min);
    printf("\nEnter the sub Array max Index :");
    scanf("%d", &sub_max);
    if (sub_max < sub_min)
    {
        printf("\nInvalid index");
    }
    else
    {
        max = array[sub_min];
        for (int i = sub_min; i < sub_max; i++)
        {
            if (array[i] > max)
                max = array[i];
        }
        printf("The max value in the sub array is :%d", max);
    }

    return 0;
}