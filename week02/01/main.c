#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    int hundred;
    int ten;
    int one;
    int y;

    printf("Input x:\n");
    scanf("%d",&x);
    x = fabs(x);

    hundred = x / 100;
    ten = (x - 100*hundred) / 10;
    one = x % 10;

    y = one*100 + ten*10 + hundred;
    printf("y=%d\n", y);
    return 0;
}