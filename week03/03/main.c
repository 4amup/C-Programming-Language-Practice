#include<stdio.h>

int main()
{
    float p,price;
    printf("Input payment p:");
    scanf("%f", &p);

    //计算打折后的价格
    price = p*(1-0.08);

    printf("price = %.1f\n", price);
    return 0;
}
