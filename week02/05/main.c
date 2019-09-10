#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = -11;
    int b = 5;

    int negative, positive;

    negative = a % b;
    positive = a % b + b;

    printf("negative: %d\n",negative);
    printf("positive: %d\n",positive);

    return 0;
}