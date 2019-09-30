#include <stdio.h>

int main(int argc, char const *argv[])
{
    int birth_year, this_year;
    int count = 0;

    // 输入信息
    printf("Input your birth year:");
    scanf("%d", &birth_year);
    printf("Input this year:");
    scanf("%d", &this_year);

    // 计算闰年
    for (int cur_year = birth_year; cur_year <= this_year; cur_year++)
    {
        //1.能被4整除而不能被100整除;2.能被100整除也能被400整除
        if ((cur_year % 4 == 0 && cur_year % 100 != 0) || (cur_year % 100 == 0 && cur_year % 400 == 0))
        {
            printf("%d\n", cur_year);
            count++;
        }
    }

    // 输出闰年数
    printf("count=%d\n", count);

    return 0;
}
