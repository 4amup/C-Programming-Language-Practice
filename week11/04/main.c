#include <stdio.h>
#include <string.h>
int main()
{
    char s[][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    char ss[10];
    int i;
    printf("Please enter a string:\n");
    gets(ss);
    for (i = 0; i <= 6; i++)
        if (strcmp(ss, s[i]) == 0)
        {
            printf("%s is %d\n", ss, i);
            return 0;
        }
    printf("Not found!\n");
    return 0;
}