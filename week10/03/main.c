#include <stdio.h>
#define MAXSIZE 80

//函数功能：统计字符串中连续重复次数最多的字符及其重复的次数
//函数参数：str指向待统计的字符串，指针形参tag返回重复字符最后出现的下标位置
//函数返回值：返回字符重复的次数
int CountRepeatStr(char str[], int *tag);

int main(int argc, char const *argv[])
{
    char str[MAXSIZE] = "";
    int tag = 0;
    int count = 0;
    printf("Input a string:\n");
    gets(str);
    count = CountRepeatStr(str, &tag);
    printf("%c:%d\n",str[tag],count);
    return 0;
}

int CountRepeatStr(char str[], int *tag){
    int max = 1;
    int count = 1;
    //遍历字符数组
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i] == str[i+1])
        {
            count++;

            if (count>max)
            {
                max = count;
                *tag = i;
            }
            
        } else {
            count = 1;
        }
        
    }
    return max;
}