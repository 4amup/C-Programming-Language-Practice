#include<stdio.h>
#include<math.h>

int main()
{   
    int x,y,a,b;
    int result;
    int unit,ten,hundred,thousand;
    int temp;
    printf("Input x:\n");
    scanf("%d",&x);

    //计算过程
    x = abs(x);
    temp = x;
    thousand = temp/1000;
    temp = temp-thousand*1000;
    hundred = temp/100;
    temp = temp-hundred*100;
    ten = temp/10;
    unit = temp%10;

    y = unit*1000+ten*100+hundred*10+thousand;
    a = unit*10+ten;
    b = hundred*10+thousand;

    result = pow(a,2)+pow(b,2);


    printf("y=%d\n",y);
    printf("a=%d,b=%d\n",a,b);
    printf("result=%d\n",result);
    return 0;
}
