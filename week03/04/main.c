#include<stdio.h>

int main()
{
    long hour1,minute1,hour2,minute2;
    long hourgap, minutegap;
    long minutetotal;
    printf("Input time one(hour, minute):");
    scanf("%d,%d",&hour1,&minute1);
    printf("Input time two(hour, minute):");
    scanf("%d,%d",&hour2,&minute2);

    //计算总分钟数之差，然后小时取整数结果，分钟数取模运算
    minutetotal = abs((hour2*60+minute2)-(hour1*60+minute1));
    hourgap = minutetotal / 60;
    minutegap = minutetotal % 60;

    printf("%d hour %d minute\n",hourgap,minutegap);
    return 0;
}