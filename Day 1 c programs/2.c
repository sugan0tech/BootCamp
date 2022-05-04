#include <stdio.h>

int main()
{
    int amount;
    int h = 0;
    int f = 0;
    int t = 0;
    printf("Enter the withdrawl amound :");
    scanf("%d", &amount);
    h = amount / 100;
    amount = amount % 100;
    f = amount / 50;
    amount = amount % 50;
    t = amount / 10;
    printf("\n No of 100's :%d\n No of 50's :%d \n No of 10's :%d", h, f, t);

    return 0;
}