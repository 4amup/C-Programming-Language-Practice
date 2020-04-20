#include <stdio.h>
#include <math.h>
#include <string.h>
#define N 8
int main(int argc, char const *argv[])
{
    char str[N + 1] = {0};
    char arr[N + 1] = {0};
    int num = 0;
    printf("Input a string:");
    scanf("%7s", str);

    // 将符合要求的放到数字字符数组中
    int j = 0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        int dif = str[i] - '0';
        if (dif >= 0 && dif <= 9)
        {
            arr[j] = str[i];
            j++;
        }
    }
    arr[j] = '\0';

    // 循环字符数组，输出数字
    int length = strlen(arr);
    for (int i = 0; i < length; i++)
    {
        int temp = arr[i] - '0';
        num += temp * pow(10, length-1-i);
    }
    printf("%d\n", num);
    return 0;
}
