#include <stdio.h>
#define N 10

// count[]数组元素代表出现次数，index代表数字
int CountRepeatNum(int count[], int n);
int main(int argc, char const *argv[])
{
    int n = 0;
    int count[N] = {0};
    int result = -1;
    printf("Input n:\n");
    scanf("%ld", &n);
    result = CountRepeatNum(&count, n);
    if (result != -1)
    {
        printf("Repeated digit!\n");
    }
    else
    {
        printf("No repeated digit!\n");
    }
    return 0;
}

int CountRepeatNum(int count[N], int n)
{
    int result = -1;
    while (n > 0)
    {
        int index = 0;
        index = n % 10;
        n = n / 10;
        count[index]++;
    }

    for (int i = 0; i < N; i++)
    {
        if (count[i] > 1)
        {
            result = count[i];
            break;
        }
    }

    return result;
}
