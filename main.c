#include <stdio.h>

int main(void)
{
    int x;

    scanf("%d", &x);

    if (x < 0 || x >= 10)
    {
        printf("OK\n");
    }

    if (x >= 0 && x < 10)
    {
        printf("NG\n");
    }

    return 0;
}