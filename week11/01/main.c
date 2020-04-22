#include <stdio.h>
#define MAXSIZE 100000

// 函数功能：计算在限时M秒内T个路段的情况下，最多往返可跑的路段数。
//          参数：M,T,U,F,D分别代表限时、路段数，以及上坡、平地、下坡的耗时;数组str保存整条山路的路段状况
//          返回值：最多可跑的路段数
long Fun(long M, long T, long U, long F, long D, char str[]);
int main(int argc, char const *argv[])
{
    long M, T, U, F, D;
    char str[MAXSIZE] = "";
    long num = 0;

    printf("Input M,T,U,F,D:");
    scanf("%ld%ld%ld%ld%ld", &M, &T, &U, &F, &D);
    printf("Input conditions of road:");
    scanf("%s", str);

    //执行函数
    num = Fun(M, T, U, F, D, str);
    printf("num=%ld\n", num);
    return 0;
}

long Fun(long M, long T, long U, long F, long D, char str[])
{
    //路段数
    long timmer = 0;
    long count = 0;

    //参数检查
    if (!(M >= 1 && M <= 10000000))
    {
        return 0;
    }

    if (!(T >= 1 && T <= 10000000))
    {
        return 0;
    }

    if (!(U >= 1 && U <= 100))
    {
        return 0;
    }

    if (!(F >= 1 && F <= 100))
    {
        return 0;
    }

    if (!(D >= 1 && D <= 100))
    {
        return 0;
    }

    //要在限时M秒内，最多跑的T路段
    //折返跑，找转折点，转折点就是循环停止的限制条件
    //经过的起点，回来时也一定会经过，算时间就可以一起算
    //循环计算路况数组就可以了

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (timmer >= M)
        {
            break;
        }

        if (timmer > M)
        {
            break;
        }
        switch (str[i])
        {
        case 'u': //上坡
            timmer = timmer + U;
            timmer = timmer + D;
            count = count + 1;
            break;
        case 'd': //下坡
            timmer = timmer + D;
            timmer = timmer + U;
            count = count + 1;
            break;
        case 'f': //平路
            timmer = timmer + F;
            timmer = timmer + F;
            count = count + 1;
            break;
        default:
            break;
        }
    }
    count = count - 1;
    return count;
}
