#include <stdio.h>

int main()
{
    float total;
    char cheese;

    printf("Enter current order total: ");
    scanf("%f", &total);

    printf("Do you want extra cheese (Y/N)? ");
    scanf(" %c", &cheese);

    if (cheese == 'Y' || cheese == 'y')
    {
        total = total + 1.50;
        printf("Updated total: $%.2f", total);
    }
    else if (cheese == 'N' || cheese == 'n')
    {
        printf("Total: $%.2f", total);
    }
    else
    {
        printf("Invalid choice. Please enter Y or N.");
    }

    return 0;
}