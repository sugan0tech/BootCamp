#include <stdio.h>
#include <math.h>
int main()
{
    int hours;
    printf("Enter the no of hours :");
    scanf("%d", &hours);
    if (hours >= 2 && hours < 3)
        printf("Highly efficient");
    else if (hours >= 3 && hours < 4)
        printf("Improve Speed");
    else if (hours >= 4 && hours < 5)
        printf("Do training");
    else
        printf("leave the company");

    return 0;
}