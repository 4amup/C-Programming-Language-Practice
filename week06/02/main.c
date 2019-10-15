#include <stdio.h>

//函数功能：计算n的所有约数中最大的三位数
int Func(int n);

int main(int argc, char const *argv[])
{
    int n;
    
    printf("Input n:");
    scanf("%d", &n);
    if ((n < 1000 || n > 1000000))
    {
        printf("Input error!\n");
        return 0;
    }
    else
    {
        printf("%d\n", Func(n));
    }
    return 0;
}

int Func(int n)
{
    int result = 0;
    for (int i = 100; i < 1000; i++)
    {
        if (n % i == 0)
        {
            result = i;
        }
    }
    return result;
}
