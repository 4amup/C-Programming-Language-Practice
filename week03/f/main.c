#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int weight,height;
    float t;
    printf("Input weight, height:\n");
    scanf("%d,%d",&weight,&height);

    //计算过程
    t = weight/(pow(height/100.0,2));

    printf("weight=%d\n",weight*2);
    printf("height=%.2f\n",height/100.0);
    printf("t=%.2f\n",t);
    return 0;
}
