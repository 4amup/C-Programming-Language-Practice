#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d;
    printf("Input a/b, c/d:");
    scanf("%d/%d,%d/%d", &a, &b, &c, &d);

    //通分运算后比较分子大小
    if (a * d > c * b)
    {
        printf("%d/%d>%d/%d\n", a, b, c, d);
    }
    else if (a * d < c * b)
    {
        printf("%d/%d<%d/%d\n", a, b, c, d);
    }
    else
    {
        printf("%d/%d=%d/%d\n", a, b, c, d);
    }
    return 0;
}
