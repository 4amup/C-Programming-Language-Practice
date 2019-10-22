#include <stdio.h>

int Sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + Sum(n - 1);
}

int main(int argc, char const *argv[])
{
    int n;

    printf("Please input n:");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("data error!\n");
        return 0;
    }

    printf("sum=%d\n", Sum(n));

    return 0;
}
