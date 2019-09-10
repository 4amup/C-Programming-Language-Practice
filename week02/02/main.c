#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a = 86;
    int b = 74;
    int c = 92;
    int d = 77;
    int e = 82;

    int a1 = 81;
    int b1 = 87;
    int c1 = 90;
    int d1 = 62;
    int e1 = 88;

    float total = (a+b+c+d+e)*0.3 + (a1+b1+c1+d1+e1)*0.7;
    float average = total / 5;
    printf("total=%.2f\n",total);
    printf("average=%.2f\n",average);
    printf("average=%d\n",(int)average);
    return 0;
}