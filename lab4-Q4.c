#include <stdio.h>

int main()
{
    int crust;
    int total;

    printf("Enter current total: ");
    scanf("%d", &total);

    printf("Enter crust type (1-Regular, 2-Thin, 3-Stuffed): ");
    scanf("%d", &crust);

    if (crust == 1)
    {
        total = total + 0;
    }
    else if (crust == 2)
    {
        total = total + 1;
    }
    else if (crust == 3)
    {
        total = total + 2;
    }
    else
    {
        printf("Invalid crust type.");
        return 0;
    }

    printf("Updated bill total: $%d", total);

    return 0;
}