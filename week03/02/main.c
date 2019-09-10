#include<stdio.h>
#include<math.h>

int main()
{   
    float length;
    int days;

    printf("Input length and days:");
    scanf("%f,%d",&length,&days);

    // 算法：计算几天后绳子的长度
    length = length / (pow(2,days));

    printf("length=%.5f\n",length);
    return 0;
}
