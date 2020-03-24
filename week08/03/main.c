#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    int num[9];
    // 算法简述：
    // 从102开始，算出204和306
    // 然后检查204和306是否小于1000
    // 然后获得三个数的个十百位数字，检查是否重复
    for (int i = 102; i < 333; i++)
    {
        a = i;
        b = 2 * i;
        c = 3 * i;
        // 检查第2个和第3个数是否越界
        if (b > 999 || c > 999)
        {
            continue;
        }
        // 求三个3位数的9个数字
        num[0] = a / 100;
        num[1] = (a - (a / 100) * 100) / 10;
        num[2] = a % 10;
        num[3] = b / 100;
        num[4] = (b - (b / 100) * 100) / 10;
        num[5] = b % 10;
        num[6] = c / 100;
        num[7] = (c - (c / 100) * 100) / 10;
        num[8] = c % 10;

        // 清空变量
        int target[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        for (int i = 0; i < 9; i++)
        {
            int index = num[i];
            target[index] += 1;
        }
        // 清空变量
        int repeat_flag = 0;
        for (int i = 0; i < 10; i++)
        {
            if (target[i] > 1)
            {
                repeat_flag = 1;
                break;
            }
        }

        if (repeat_flag == 1)
        {
            continue;
        }
        else
        {
            printf("%d,%d,%d\n", a, b, c);
        }
    }
    return 0;
}