#include <math.h>
#include <stdio.h>

int main()
{
    int n;
    int tmp;
    int res = 0;
    int count = 0;
    scanf("%d", &n);
    tmp = n;
    while (n != 0)
    {
        tmp = n % 10;
        tmp = (tmp + 1) % 10;
        res = res + tmp * (pow(10, count));
        n = n / 10;
        count++;
    }
    printf("%d", res);

    return 0;
}