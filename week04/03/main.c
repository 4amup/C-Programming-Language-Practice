#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double capital, rate, deposit;
    int n;
    char command;

    //输入
    printf("Input capital, year:");
    scanf("%lf,%d", &capital, &n);
    printf("Compound interest (Y/N)?");
    scanf(" %c", &command);

    //判断利率
    switch (n)
    {
    case 1:
        rate = 0.0225;
        break;
    case 2:
        rate = 0.0243;
        break;
    case 3:
        rate = 0.0270;
        break;
    case 5:
        rate = 0.0288;
        break;
    case 8:
        rate = 0.0300;
        break;
    default:
        printf("Error year!\n");
        return 0; //结束程序
    }

    //判断哪种方式，并计算结果
    if (command == 'Y' || command == 'y')
    {
        deposit = capital * pow((1 + rate), n);
    }
    else if (command == 'N' || command == 'n')
    {
        deposit = capital * (1 + rate * n);
    }
    else
    {
        printf("input error!");
        return 0;
    }

    //输出结果
    printf("rate = %.4f, deposit = %.4f\n", rate, deposit);
    return 0;
}
