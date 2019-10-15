#include <stdio.h>

long Fact(int n); //函数功能：计算n的阶乘

int main(int argc, char const *argv[])
{

    int a, b, c;
    for (int m = 100; m < 1000; m++)
    {
        a = m / 100;
        c = m % 10;
        b = (m - a * 100) / 10;
        if (m == Fact(a) + Fact(b) + Fact(c))
        {
            printf("%d\n", m);
        }
    }

    return 0;
}

long Fact(int n)
{
    long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}