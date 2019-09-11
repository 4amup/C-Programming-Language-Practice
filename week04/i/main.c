#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b, c;
    float x1, x2;

    //参数录入
    printf("Please enter the coefficients a,b,c:\n");
    scanf("%f,%f,%f", &a, &b, &c);

    //计算过程
    if (b * b - 4.0 * a * c < 0) //系数此情况无实数根
    {
        printf("error!\n");
    }
    else
    {
        x1 = (-b + sqrt(b * b - 4.0 * a * c)) / (2.0 * a);
        x2 = (-b - sqrt(b * b - 4.0 * a * c)) / (2.0 * a);
        printf("x1=%7.4f, x2=%7.4f\n", x1, x2);
    }
    return 0;
}
