#include <stdio.h>

int main()
{
    int math1, english, math2;
    float finalscore;
    printf("Input math1, English and math2:");
    scanf("%d,%d,%d",&math1, &english, &math2);

    finalscore = (math1*5.0+english*1.5+math2*3.5) / 10.0;
    printf("Final score = %.2f\n", finalscore);
    return 0;
}
