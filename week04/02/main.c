#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    double capital,rate,deposit;
    int n;
    char command;

    //输入
    printf("Input rate, year, capital:");
    scanf("%lf,%d,%lf",&rate,&n,&capital);
    printf("Compound interest (Y/N)?");
    scanf(" %c",&command);

    //判断哪种方式，并计算结果
    if (command=='Y' || command=='y')
    {
        deposit = capital*pow((1+rate),n);
    } else if (command=='N' || command=='n')
    {
        deposit = capital*(1+rate*n);
    } else
    {
        printf("input error!");
        return 0;
    }

    //输出结果
    printf("deposit = %.4f\n",deposit);
    return 0;
}
