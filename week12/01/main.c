#include <stdio.h>
#include <math.h>
main()
{
    typedef struct clock
    {
        int hour;
        int minute;
        int second;
    } CLOCK;
    CLOCK t1;
    CLOCK t2;
    CLOCK result;
    printf("Input time one:(hour，minute):");
    scanf("%d,%d", &t1.hour, &t1.minute);
    printf("Input time two: (hour，minute):");
    scanf("%d,%d", &t2.hour, &t2.minute);
    result.hour = fabs((t1.hour * 60 + t1.minute) - (t2.hour * 60 + t2.minute)) / 60;
    result.minute = fabs(((t1.hour * 60 + t1.minute) - (t2.hour * 60 + t2.minute)) % 60);

    printf("%dhour,%dminute\n", result.hour, result.minute);
}

