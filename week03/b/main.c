#include <stdio.h>

int main()
{   
    int item;
    float price;
    int month,day,year;
    printf("Enter item number:\n");
    scanf("%d",&item);

    printf("Enter unit price:\n");
    scanf("%f",&price);
    
    printf("Enter purchase date (mm/dd/yy):\n");
    scanf("%d/%d/%d",&month,&day,&year);

    printf("Item      Unit     Purchase\n");
    printf("%-9d$ %-9.2f%02d%02d%04d\n",item,price,month,day,year);
    return 0;
}
