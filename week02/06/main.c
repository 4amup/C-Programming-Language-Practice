#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ming_dad_hight = 175;
    int ming_mom_hight = 162;
    int hong_dad_hight = 169;
    int hong_mom_hight = 153;

    int ming_hight;
    int hong_hight;

    ming_hight = (ming_dad_hight + ming_mom_hight)*0.54;
    hong_hight = (hong_dad_hight*0.923 + hong_mom_hight)/2;

    printf("Height of xiao ming:%d\n",ming_hight);
    printf("Height of xiao hong:%d\n",hong_hight);

    return 0;
}