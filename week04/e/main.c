#include <stdio.h>

int main(int argc, char const *argv[])
{
    int area;
    float weight, price;
    int weight_other;
    scanf("%d,%f", &area, &weight);

    if (weight <= 0)
    {
        return 0;
    }
    else if (weight > 1)
    {
        weight_other = (int)weight;
    }

    //判断区域
    switch (area)
    {
    case 0:
        if (weight <= 1)
        {
            price = 10.0;
        }
        else
        {
            price = 10.0 + 3.0 * weight_other;
        }
        printf("Price: %5.2f\n", price);
        break;
    case 1:
        if (weight <= 1)
        {
            price = 10.0;
        }
        else
        {
            price = 10.0 + 4.0 * weight_other;
        }
        printf("Price: %5.2f\n", price);
        break;
    case 2:
        if (weight <= 1)
        {
            price = 15.0;
        }
        else
        {
            price = 15.0 + 5.0 * weight_other;
        }
        printf("Price: %5.2f\n", price);
        break;
    case 3:
        if (weight <= 1)
        {
            price = 15.0;
        }
        else
        {
            price = 15.0 + 6.5 * weight_other;
        }
        printf("Price: %5.2f\n", price);
        break;
    case 4:
        if (weight <= 1)
        {
            price = 15.0;
        }
        else
        {
            price = 15.0 + 10.0 * weight_other;
        }
        printf("Price: %5.2f\n", price);
        break;
    default:
        printf("Error in Area\n");
        printf("Price: %5.2f\n", 0);
        break;
    }
    return 0;
}
