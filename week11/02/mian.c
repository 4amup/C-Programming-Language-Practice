#include <stdio.h>
#define MAXSIZE 100

//数组a[]存放用户输入的n个整数
void Seperate(int a[], int n);
int main(int argc, char const *argv[])
{
    int n = 0;
    int a[MAXSIZE] = {0};
    
    //输入参数，n个数
    printf("Input n:");
    scanf("%d",&n);

    //输入参数，整数数组
    printf("Input numbers:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    //执行函数
    Seperate(a,n);
    
    return 0;
}

//解题思路：用两个循环分别输出奇数和偶数，在输出第一个数时用"%d"格式字符，在输出其余数时用",%d"格式字符，用标志变量记录和判断是否是第一个奇数或偶数。
void Seperate(int a[], int n)
{   
    //标志变量，初始化是-1，1代表是奇数，0代表是偶数；
    int flag = -1;
    int even_count = 0;
    int odd_count = 0;
    //输出奇数
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2 != 0)
        {
            flag = 1;
            odd_count ++;
        } else {
            continue;
        }

        if (odd_count == 1)
        {
            printf("%d", a[i]);
        } else {
            printf(",%d", a[i]);
        }
    }

    //换行符号
    printf("\n");

    //输出偶数
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2 == 0)
        {
            flag = 0;
            even_count ++;
        } else {
            continue;
        }

        if (even_count == 1)
        {
            printf("%d", a[i]);
        } else {
            printf(",%d", a[i]);
        }
    }
    
}