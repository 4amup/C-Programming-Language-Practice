#include <stdio.h>
#include <math.h>

float Y(float x, int n)
{
    if (n == 0)
    {
        return 0;
    }

    return sqrt(x + Y(x, n - 1));
}

int main(int argc, char const *argv[])
{
    double x;
    int n;
    printf("Please input x and n:");
    scanf("%lf,%d", &x, &n);

    //递归计算
    printf("Result=%.2f\n", Y(x, n));
    return 0;
}
