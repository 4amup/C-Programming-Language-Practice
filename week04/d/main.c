#include <stdio.h>

int main(int argc, char const *argv[])
{
    char input;
    printf("Input simple:\n");
    scanf("%c", &input);

    if (input >= 0 && input <= 9)
    {
        printf("It is a digit character.\n");
    }
    else if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
    {
        printf("It is an English character.\n");
    }
    else
    {
        printf("It is other character.\n");
    }

    return 0;
}
