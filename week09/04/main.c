#include <stdio.h>
#define N 999

long int GetFactorial(int n);
int main(int argc, char const *argv[])
{
    int arr[N] = {0};
    int hundreds, tens, units;
    long int m;
    for (int i = 100; i < 1000; i++)
    {
        // 分别获得个十百位数字
        hundreds = i / 100;
        tens = (i - 100 * hundreds) / 10;
        units = i % 10;
        m = GetFactorial(hundreds) + GetFactorial(tens) + GetFactorial(units);

        if (m > 99 && m < 1000)
        {
            arr[m]++;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > 0)
        {
            printf("%ld\n", i);
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
