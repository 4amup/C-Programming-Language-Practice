#include <stdio.h>

float rate(float p);

int main(int argc, char const *argv[])
{
    float p;
    printf("Input payment:");
    scanf("%f", &p);
    printf("price = %.1f\n", (float)p * (1 - rate(p)));
}

float rate(float p)
{
    if (p < 100)
    {
        return 0;
    }
    else if (p >= 100 && p < 200)
    {
        return 0.05;
    }
    else if (p >= 200 && p < 500)
    {
        return 0.08;
    }
    else if (p >= 500 && p < 1000)
    {
        return 0.1;
    }
    else if (p >= 1000)
    {
        return 0.15;
    }
}