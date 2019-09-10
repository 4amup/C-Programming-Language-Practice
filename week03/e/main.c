#include<stdio.h>

int main(int argc, char const *argv[])
{   
    int x,y,z;
    char a = 'a';
    printf("Input your English name:\n");
    getchar();
    scanf("%c%c%c",&x,&y,&z);

    printf("%c%c%c\n",x-32,y,z);

    printf("%c:%d\n",x,x-a+1);
    printf("%c:%d\n",y,y-a+1);
    printf("%c:%d\n",z,z-a+1);
    return 0;
}
