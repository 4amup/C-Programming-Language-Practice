#include <stdio.h>

int main(int argc, char const *argv[])
{
    float distance;
    int time;
    float fee;

    //参数录入
    printf("Input distance and time:");
    scanf("%f,%d", &distance, &time);

    //计算过程
    fee = (time / 5) * 2; //低速等时费

    //分段算法
    if (distance > 10)
    {
        fee += (distance - 10) * 3.0;//累加超过10公里的部分车费
    }

    if (distance > 3)//累加超过3公里-10公里之内的车费
    {
        fee += ((distance - 3) < 7 ? (distance - 3) : 7) * 2.0;//distance-3的差的min值是这部分的车费
    }

    if (distance >= 0)//再累加固定的起步费8元
    {
        fee += 8;
    }

    //结果输出
    printf("fee = %.0f\n", fee);
    return 0;
}
