#include <stdio.h>

int main()
{
    char first, second;
    printf("please input the first letter of someday:\n");
    scanf(" %c", &first);
    switch (first)
    {
    case 'm':
    case 'M':
        printf("monday\n");
        break;
    case 'w':
    case 'W':
        printf("wednesday\n");
        break;
    case 'f':
    case 'F':
        printf("friday\n");
        break;
    case 't':
    case 'T':
        printf("please input second letter:\n");
        scanf(" %c", &second);
        if (second == 'u')
        {
            printf("tuesday\n");
            break;
        }
        else if (second == 'h')
        {
            printf("thursday\n");
            break;
        }
        else
        {
            printf("data error\n");
            break;
        }

    case 's':
    case 'S':
        printf("please input second letter:\n");
        scanf(" %c", &second);
        if (second == 'a')
        {
            printf("saturday\n");
            break;
        }
        else if (second == 'u')
        {
            printf("sunday\n");
            break;
        }
        else
        {
            printf("data error\n");
            break;
        }
    default:
        printf("data error\n");
        break;
    }
    return 0;
}