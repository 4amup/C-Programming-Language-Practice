#include <stdio.h>

int main(int argc, char const *argv[])
{
    int year;
    int input_counter;
    input_counter = scanf("%d", &year);

    if (input_counter == 1 && year >= 0)
    {
        if (year % 4 == 0 && year % 100 != 0)
        {
            printf("Yes\n");
        }
        else if (year % 400 == 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else
    {
        printf("Input error!\n");
    }
    return 0;
}
