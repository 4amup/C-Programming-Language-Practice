#include <math.h>

int main(int argc, char const *argv[])
{
    int age;
    int min_age = 1;
    int max_age;

    int num4, num6;

    int a1, a2, a3, a4;
    int b1, b2, b3, b4, b5, b6;

    // 先确定年龄范围：立方是4位数字
    while (pow(min_age, 3) < 1000)
    {
        min_age++;
    }

    max_age = min_age;

    while (pow(max_age, 3) < 10000)
    {
        max_age++;
    }

    for (age = min_age; age < max_age; age++)
    {
        // 计算立方的4位数字和4次方的6位数字
        num4 = age * age * age;
        num6 = age * age * age * age;
        a1 = num4 / 1000;
        a2 = (num4 - a1 * 1000) / 100;
        a3 = (num4 - a1 * 1000 - a2 * 100) / 10;
        a4 = num4 % 10;

        b1 = num6 / 100000;
        b2 = (num6 - b1 * 100000) / 10000;
        b3 = (num6 - b1 * 100000 - b2 * 10000) / 1000;
        b4 = (num6 - b1 * 100000 - b2 * 10000 - b3 * 1000) / 100;
        b5 = (num6 - b1 * 100000 - b2 * 10000 - b3 * 1000 - b4 * 100) / 10;
        b6 = num6 % 10;

        if (
            (a1 != a2) && (a1 != a3) && (a1 != a4) && (a1 != b1) && (a1 != b2) && (a1 != b3) && (a1 != b4) && (a1 != b5) && (a1 != b6) &&
            (a2 != a3) && (a2 != a4) && (a2 != b1) && (a2 != b2) && (a2 != b3) && (a2 != b4) && (a2 != b5) && (a2 != b6) &&
            (a3 != a4) && (a3 != b1) && (a3 != b2) && (a3 != b3) && (a3 != b4) && (a3 != b5) && (a3 != b6) &&
            (a4 != b1) && (a4 != b2) && (a4 != b3) && (a4 != b4) && (a4 != b5) && (a4 != b6) &&
            (b1 != b2) && (b1 != b3) && (b1 != b4) && (b1 != b5) && (b1 != b6) &&
            (b2 != b3) && (b2 != b4) && (b2 != b5) && (b2 != b6) &&
            (b3 != b4) && (b3 != b5) && (b3 != b6) &&
            (b4 != b5) && (b4 != b6) &&
            (b5 != b6))
        {
            break;
        }
    }

    printf("age=%d\n", age);
    return 0;
}
