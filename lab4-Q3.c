#include <stdio.h>

int main()
{
    int quantity;
    int total;

    printf("Enter pizza quantity (1, 2, or 3): ");
    scanf("%d", &quantity);

    if (quantity == 1)
    {
        total = 8;
    }
    else if (quantity == 2)
    {
        total = 15;
    }
    else if (quantity == 3)
    {
        total = 21;
    }
    else
    {
        printf("Invalid quantity.");
        return 0;
    }

    printf("Quantity: %d\n", quantity);
    printf("Final package total: $%d", total);

    return 0;
}