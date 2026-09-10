#include <stdio.h>

int main()
{
    float total;
    int hour;

    printf("Enter total bill: ");
    scanf("%f", &total);

    printf("Enter current hour (0-23): ");
    scanf("%d", &hour);

    if (hour >= 11 && hour <= 14)
    {
        total = total - (total * 0.10);
        printf("Discounted total: $%.2f", total);
    }
    else
    {
        printf("Original bill: $%.2f", total);
    }

    return 0;
}