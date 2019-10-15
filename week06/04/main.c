#include <stdio.h>

// 函数功能：判断x是否是素数，若函数返回0，则表示不是素数，若返回1，则代表是素数
int IsPrime(int x);

int main(int argc, char const *argv[])
{
    int n;
    int sum;
    printf("Input n:");
    scanf("%d", &n);
    if (n > 1)
    {
        for (int i = 2; i <= n; i++)
        {
            if (IsPrime(i) == 1)
            {
                sum += i;
            }
        }
    }
    else
    {
        sum = 0;
    }
    
    printf("sum=%d\n", sum);
    return 0;
}

int IsPrime(int x)
{
    int result = 1;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            result = 0;
        }
    }
    
    return result;
}
