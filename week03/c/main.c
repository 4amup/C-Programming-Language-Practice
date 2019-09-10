#include<stdio.h>
#include<math.h>

int main()
{   
    float x,y;
    float result;
    printf("Please input x and y:\n");
    scanf("%f,%f",&x,&y);

    //计算平方和
    result = pow(x,2) + pow(y,2);

    printf("Result=%.2f\n",result);
    return 0;
}
