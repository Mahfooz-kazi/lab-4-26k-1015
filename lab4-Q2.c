#include <stdio.h>

int main()
{
    int pizzas;
    int total;

    printf("Enter number of pizzas: ");
    scanf("%d", &pizzas);

    if (pizzas > 1)
    {
        printf("Check our multi-pizza deals.");
    }
    else
    {
        total = pizzas * 8;
        printf("Your total is $%d.", total);
    }

    return 0;
}