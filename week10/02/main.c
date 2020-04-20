#include <stdio.h>
#include <string.h>
#define MAXSIZE 80

int SearchString(char s[], char d[]);
int main(int argc, char const *argv[])
{
    int result = -1;
    char s[MAXSIZE] = "";
    char d[MAXSIZE] = "";
    printf("Input a string:");
    gets(s);
    printf("Input another string:");
    gets(d);
    result = SearchString(s, d);
    if (result == -1)
    {
        printf("Not found!\n");
    }
    else
    {
        printf("Searching results:%d\n", result);
    }
    return 0;
}

int SearchString(char s[], char d[])
{
    int result = -1;
    //计算小串的长度
    int length = 0; //strlen(d);
    for (; d[length] != '\0';)
    {
        length++;
    };

    for (int i = 0; s[i + length] != '\0'; i++) //循环停止条件，最后一个compare的尾部碰到边界
    {
        // 将固定长度供比较的字符放入compare数组
        // 放的时候顺便比较是否和小子串相等
        // 啥叫匹配上，也就是全都相等，设置计数器，计数器=length时，找到跳出
        int count = 0;
        for (int j = 0; j < length; j++)
        {
            char compare = s[i + j];
            result = i + 1;//数组下标和第几个的关系
            if (d[j] != compare)
            {
                result = -1;
                count = 0;
                break;
            }
            else
            {
                count++;
            }
        }

        if (count == length)
        {
            break;
        }
    }
    return result;
}
