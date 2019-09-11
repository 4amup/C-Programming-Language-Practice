#include <stdio.h>

int main(int argc, char const *argv[])
{
    int score;
    char grade;
    int input;
    printf("Please input score:\n");
    input = scanf("%d", &score);

    if (input == 1)
    {
        if (score < 0 || score > 100)
        {
            printf("Input error!\n");
            return 0;
        }
        else if (score >= 90)
        {
            grade = 'A';
        }
        else if (score >= 80)
        {
            grade = 'B';
        }
        else if (score >= 70)
        {
            grade = 'C';
        }
        else if (score >= 60)
        {
            grade = 'D';
        }
        else
        {
            grade = 'E';
        }

        printf("grade: %c\n", grade);
    }
    else
    {
        printf("Input error!\n");
    }
    return 0;
}
