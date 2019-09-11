#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input_counter = 0;
    int a, b;
    input_counter = scanf("%d %d", &a, &b);

    if (input_counter == 2)
    {
        printf("a = %d, b = %d\n", a, b);
    }
    else
    {
        printf("Input error!");
    }
    return 0;
}
