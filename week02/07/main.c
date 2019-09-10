#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1, x2;
    float a = 2.0, b = 3.0, c = 1.0;

    x1 = (-b/(2*a)) + (sqrt(b*b - 4*a*c)/(2*a));
    x2 = (-b/(2*a)) - (sqrt(b*b - 4*a*c)/(2*a));
    printf("x1=%.4f\n", x1);
    printf("x2=%.4f\n", x2);

    return 0;
}