#include <stdio.h>

int main()
{
    float total;
    int option;

    printf("Enter order total: ");
    scanf("%f", &total);

    printf("Fulfillment Option (1. Pickup, 2. Delivery): ");
    scanf("%d", &option);

    if (option == 2)
    {
        total = total + 3.00;
    }
    else if (option == 1)
    {
        total = total;
    }
    else
    {
        printf("Invalid option.");
        return 0;
    }

    printf("Final total: $%.2f", total);

    return 0;
}