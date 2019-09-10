#include<stdio.h>

int main()
{
    int month,day,year;
    printf("Enter a date (mm/dd/yy):\n");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date: %04d.%02d.%02d\n",year,month,day);
    return 0;
}
