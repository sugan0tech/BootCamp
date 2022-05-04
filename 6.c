#include <stdio.h>
#include <math.h>

int main()
{
    int n = 21;
    int usr_num;
    printf("U can pick 1 to 4 match sticks\n");
    while (n > 0)
    {
        printf("\nEnter the no of match sticks :");
        scanf("%d", &usr_num);
        if (n == 1)
        {
            printf("\nyou loose lamo !!\n");
            break;
        }
        if ((usr_num < 5) && usr_num >= 1)
        {
            printf("\ncomputer chooses %d :", 5 - usr_num);
            n = n - 5;
        }
        else
        {
            printf("invalid input");
            break;
        }
        printf("\nremaining match sticks %d", n);
    }
    return 0;
}