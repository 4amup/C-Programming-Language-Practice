#include <stdio.h>

long int GetFactorial(int n);
int main(int argc, char const *argv[])
{
    int hundreds, tens, units;
    long int m;
    for (int i = 144; i < 1000; i++)
    {
        // 分别获得个十百位数字
        hundreds = i / 100;
        tens = (i - 100 * hundreds) / 10;
        units = i % 10;
        m = GetFactorial(hundreds) + GetFactorial(tens) + GetFactorial(units);
        if (i == m)
        {
            printf("%ld\n", m);
        }
    }
    return 0;
}

long int GetFactorial(int n)
{
    long int result = 1;
    if (n == 0)
    {
        result = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
