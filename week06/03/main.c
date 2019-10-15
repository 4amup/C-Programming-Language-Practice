#include <stdio.h>
#include <math.h>

// 函数功能：计算a和b的最大公约数，输入数据超出有效范围时返回-1
int Gcd(int a, int b);

int main(int argc, char const *argv[])
{
    int m, n;
    int div;
    printf("Input m,n:");
    scanf("%d,%d", &m, &n);
    if (m >= 1 && n <= 10000)
    {
        div = Gcd(m, n);
        printf("%d/%d\n", m / div, n / div);
    }
    else
    {
        printf("Input error!\n");
    }

    return 0;
}

int Gcd(int a, int b)
{
    int min;
    int result;
    if (a < 1 || b > 10000)
    {
        result = -1;
    }

    // 确定最大值
    if (abs(a) < abs(b))
    {
        min = a;
    }
    else
    {
        min = b;
    }

    for (int i = min; i > 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            result = i;
        }
    }

    return result;
}
