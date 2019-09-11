#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int input;
    int a, b;
    int thousand, hundred, ten, unit;
    int temp;

    int sum, sub, multi, mod;
    float dev;

    printf("Please input n:\n");
    scanf("%d", &input);

    if (fabs(input) >= 1000 && fabs(input) <= 9999)
    {
        //递归计算，让数逐渐变短
        temp = input;
        unit = temp % 10;
        temp = temp / 10;
        ten = temp % 10;
        temp = temp / 10;
        hundred = temp % 10;
        temp = temp / 10;
        thousand = temp % 10;

        a = thousand * 10 + hundred;
        b = ten * 10 + unit;

        printf("%d,%d\n", a, b);

        sum = a + b;
        sub = a - b;
        multi = a * b;

        printf("sum=%d,sub=%d,multi=%d\n", sum, sub, multi);

        if (b == 0)
        {
            printf("The second operater is zero!");
        }
        else
        {
            dev = (float)a / (float)b;
            mod = a % b;
            printf("dev=%.2f,mod=%d\n", dev, mod);
        }
    }
    else
    {
        return 0;
    }
    return 0;
}
