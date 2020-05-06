#include <stdio.h>

// 在线测试就是不通过，但是自己测试是没问题的，不知什么原因

typedef struct clock
{
    int hour;
    int minute;
    int second;
} CLOCK;

// 函数功能：计算并返回两个时间t1和t2之间差
CLOCK CalculateTime(CLOCK t1, CLOCK t2);

int main(int argc, char const *argv[])
{
    // 数据定义
    CLOCK t1, t2;

    // 数据录入
    printf("Input time one:(hour，minute):");
    scanf("%d,%d", &t1.hour, &t1.minute);
    printf("Input time two: (hour，minute):");
    scanf("%d,%d", &t2.hour, &t2.minute);

    // 使用函数后输出结果
    CLOCK result = CalculateTime(t1, t2);
    printf("%dhour,%dminute\n", result.hour, result.minute);
}

// 实现思路：两个之间的差值换算成分钟后得到
CLOCK CalculateTime(CLOCK t1, CLOCK t2)
{
    CLOCK result;
    int minute1 = t1.hour * 60 + t1.minute;
    int minute2 = t2.hour * 60 + t2.minute;
    int dif = 0;

    // 二者的绝对值
    if (minute1 > minute2)
    {
        dif = minute1 - minute2;
    }
    else
    {
        dif = minute2 - minute1;
    }

    // 计算小时数和分钟数
    result.hour = dif / 60;
    result.minute = dif % 60;

    return result;
}