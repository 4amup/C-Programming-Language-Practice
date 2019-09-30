

int main(int argc, char const *argv[])
{
    // 变量定义
    int birth_year, this_year;
    int leap_year = 0;
    unsigned long heart_count;

    // 输入信息
    printf("Input your birth year:");
    scanf("%d", &birth_year);
    printf("Input this year:");
    scanf("%d", &this_year);

    // 计算闰年数量
    for (int cur_year = birth_year; cur_year < this_year; cur_year++)
    {
        //1.能被4整除而不能被100整除;2.能被100整除也能被400整除
        if ((cur_year % 4 == 0 && cur_year % 100 != 0) || (cur_year % 100 == 0 && cur_year % 400 == 0))
        {
            leap_year++;
        }
    }

    // 计算心跳数量
    heart_count = ((this_year - birth_year) * 365 + leap_year) * 24 * 60 * 75;
    printf("The heart beats in your life: %lu",heart_count);
    return 0;
}
