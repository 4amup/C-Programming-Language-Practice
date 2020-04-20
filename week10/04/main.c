#include<stdio.h>
#define MAXSIZE 100
#define OFFSET 3
//计算凯撒密码，按字母表向右移动3位
//范围是a-z
//本程序未考虑用户输入非法数据的解决，仅仅实现主要算法
void Caesar(char c[]);
int main(int argc, char const *argv[])
{
    char str[MAXSIZE] = "";
    printf("Input a string:");
    gets(str);
    Caesar(str);
    puts(str);
    return 0;
}

void Caesar(char c[]){
    for (int i = 0; c[i]!='\0'; i++)
    {
        char offchar = c[i] + OFFSET;
        if (offchar>'z')
        {
            c[i] = offchar-('z'-'a');
        } else
        {
            c[i] = offchar;
        }     
    }
}