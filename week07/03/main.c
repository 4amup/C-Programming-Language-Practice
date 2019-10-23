#include <stdio.h>
int Monkey(int n, int x);

int main()
{
    int n, x, sum;
    x = 1;
    printf("Input days n:");
    scanf("%d", &n);
    sum = Monkey(n, x);
    printf("x=%d\n", sum);
    return 0;
}

int Monkey(int n, int x)
{
    int sum = 0;
    if (n == 1)
    {
        sum = x;
    }
    else
    {
        sum = Monkey(n - 1, 2 * (x + 1));
    }
    return sum;
}