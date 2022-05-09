#include <stdio.h>
#include <math.h>
int main()
{
    for (int i = 1; i <= 500; i++)
    {
        if (checkAmstrong(i) == 1)
            printf("\n%d", i);
    }
    return 0;
}

int checkAmstrong(int n)
{
    int tmp = n;
    int res = 0;
    while (tmp != 0)
    {
        res += pow(tmp % 10, 3);
        tmp = tmp / 10;
    }
    if (res == n)
    {
        return 1;
    }
    return 0;
}