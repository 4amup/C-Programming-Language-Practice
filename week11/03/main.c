#include <stdio.h>
#define MAXSIZE 80

// 函数功能：判断b是否是a的子串，是则返回1，否则返回0
int IsSubString(char a[], char b[]);
int main(int argc, char const *argv[])
{
    // 变量初始化
    char a[MAXSIZE] = "";
    char b[MAXSIZE] = "";
    int result = 0;

    // 根据提示输入变量并赋值
    printf("Input the first string:");
    gets(a);
    printf("Input the second string:");
    gets(b);

    // 运算
    result = IsSubString(a, b);

    if (result == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}

int IsSubString(char a[], char b[])
{
    // 匹配结果1-匹配了，0未匹配
    int result = 0;

    // 小串长度
    int length = 0;
    for (int i = 0; b[i] != '\0'; i++)
    {
        length++;
    }

    // 边界判断，按子串长度移动，边界值就是a[i+length]
    for (int i = 0; a[i + length - 1] != '\0'; i++)
    {
        int count = 0;
        for (int j = 0; b[j] != '\0'; j++)
        {
            // 大串同位置字符
            char a_idx = a[i + j];
            char b_idx = b[j];

            // 大小比较
            if (a_idx != b_idx) //匹配不上，结束本次子串循环
            {
                count = 0;
                break;
            }
            else
            { // 匹配度++
                count++;
            }
        }

        // 结束一次子串比较后，看匹配度情况
        if (count == length)
        {
            result = 1;
            break; //匹配成功，不看后面的情况了
        }
    }

    return result;
}