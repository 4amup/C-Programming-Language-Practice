#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b;
    float compete, standard;

    //输入
    printf("Input percent of A and B:");
    scanf("%f%f", &a, &b);

    //计算
    compete = a * 10 + b * 6;
    standard = a * 8 + b * 10;

    //输出
    printf("compete = %.4f\nstandard = %.4f\n", compete, standard);

    if (compete > standard)
    {
        printf("The Best Response is compete!");
    }
    else if (compete < standard)
    {
        printf("The Best Response is standard!");
    }
    else
    {
        printf("The same！");
    }

    return 0;
}
