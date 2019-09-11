#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    printf("Please enter the number:\n");
    scanf("%d", &number);

    if (number <= 0 || number >= 10000)
    {
        printf("error!\n");
    }
    else if (number >= 1000 && number <= 9999)
    {
        printf("%d: 1000-9999\n", number);
    }
    else if (number >= 100 && number <= 999)
    {
        printf("%d: 100-999\n", number);
    }
    else if (number >= 10 && number <= 99)
    {
        printf("%d: 10-99\n", number);
    }
    else if (number >= 0 && number <= 9)
    {
        printf("%d: 0-9\n", number);
    }
    return 0;
}
