#include <stdio.h>

int main()
{
    int size, quantity, crust, hour, option;
    char cheese, student;

    float basePrice = 0;
    float crustPrice = 0;
    float cheesePrice = 0;
    float happyDiscount = 0;
    float studentDiscount = 0;
    float deliveryPrice = 0;
    float total;

    char sizeName[20];
    char crustName[20];

    printf("WELCOME TO SLICE & DICE PIZZA PALACE\n");
    printf("========================================\n");

    /* Pizza Size */
    printf("Select pizza size (1.Small, 2.Medium, 3.Large): ");
    scanf("%d", &size);

    if (size == 1)
    {
        printf("Small size selected.\n");
        sprintf(sizeName, "Small");
    }
    else if (size == 2)
    {
        printf("Medium size selected.\n");
        sprintf(sizeName, "Medium");
    }
    else if (size == 3)
    {
        printf("Large size selected.\n");
        sprintf(sizeName, "Large");
    }
    else
    {
        printf("Invalid pizza size.\n");
        return 0;
    }

    /* Pizza Quantity */
    printf("How many pizzas (1-3): ");
    scanf("%d", &quantity);

    if (quantity == 1)
    {
        basePrice = 8;
        printf("1 pizza: $8.00\n");
    }
    else if (quantity == 2)
    {
        basePrice = 15;
        printf("2 pizzas: $15.00 (Save $1.00!)\n");
    }
    else if (quantity == 3)
    {
        basePrice = 21;
        printf("3 pizzas: $21.00 (Save $3.00!)\n");
    }
    else
    {
        printf("Invalid pizza quantity.\n");
        return 0;
    }

    total = basePrice;

    /* Crust */
    printf("Select crust (1.Regular, 2.Thin, 3.Stuffed): ");
    scanf("%d", &crust);

    if (crust == 1)
    {
        crustPrice = 0;
        sprintf(crustName, "Regular");
        printf("Regular crust selected (+$0.00)\n");
    }
    else if (crust == 2)
    {
        crustPrice = 1;
        sprintf(crustName, "Thin");
        total = total + crustPrice;
        printf("Thin crust selected (+$1.00)\n");
    }
    else if (crust == 3)
    {
        crustPrice = 2;
        sprintf(crustName, "Stuffed");
        total = total + crustPrice;
        printf("Stuffed crust selected (+$2.00)\n");
    }
    else
    {
        printf("Invalid crust type.\n");
        return 0;
    }

    /* Extra Cheese */
    printf("Extra cheese (Y/N): ");
    scanf(" %c", &cheese);

    if (cheese == 'Y' || cheese == 'y')
    {
        cheesePrice = 1.50;
        total = total + cheesePrice;
        printf("Extra cheese added (+$1.50)\n");
    }
    else if (cheese == 'N' || cheese == 'n')
    {
        cheesePrice = 0;
        printf("No extra cheese selected.\n");
    }
    else
    {
        printf("Invalid cheese choice.\n");
        return 0;
    }

    /* Happy Hour */
    printf("Enter current hour (0-23): ");
    scanf("%d", &hour);

    if (hour >= 11 && hour <= 14)
    {
        happyDiscount = total * 0.10;
        total = total - happyDiscount;
        printf("Happy Hour 10%% discount applied! (-$%.2f)\n",
               happyDiscount);
    }
    else
    {
        printf("No Happy Hour discount.\n");
    }

    /* Student Discount */
    printf("Student ID (Y/N): ");
    scanf(" %c", &student);

    if (student == 'Y' || student == 'y')
    {
        studentDiscount = 2;
        total = total - studentDiscount;
        printf("Student discount applied! (-$2.00)\n");
    }
    else if (student == 'N' || student == 'n')
    {
        studentDiscount = 0;
        printf("No student discount.\n");
    }
    else
    {
        printf("Invalid student ID choice.\n");
        return 0;
    }

    /* Free Garlic Bread */
    if (quantity == 3 && crust == 3)
    {
        printf("You get free garlic bread!\n");
    }

    /* Delivery */
    printf("Fulfillment (1.Pickup, 2.Delivery): ");
    scanf("%d", &option);

    if (option == 1)
    {
        deliveryPrice = 0;
        printf("Pickup selected.\n");
    }
    else if (option == 2)
    {
        deliveryPrice = 3;
        total = total + deliveryPrice;
        printf("Delivery selected (+$3.00)\n");
    }
    else
    {
        printf("Invalid fulfillment option.\n");
        return 0;
    }

    /* Prevent negative bill */
    if (total < 0)
    {
        total = 0;
    }

    /* Receipt */
    printf("========================================\n");
    printf("ORDER RECEIPT\n");
    printf("========================================\n");

    printf("Pizza Size: %s\n", sizeName);
    printf("Quantity: %d pizza(s)\n", quantity);
    printf("Crust Type: %s\n", crustName);

    if (cheese == 'Y' || cheese == 'y')
    {
        printf("Extra Cheese: Yes\n");
    }
    else
    {
        printf("Extra Cheese: No\n");
    }

    if (student == 'Y' || student == 'y')
    {
        printf("Student ID: Yes\n");
    }
    else
    {
        printf("Student ID: No\n");
    }

    if (option == 2)
    {
        printf("Fulfillment: Delivery\n");
    }
    else
    {
        printf("Fulfillment: Pickup\n");
    }

    printf("----------------------------------------\n");

    if (quantity == 3 && crust == 3)
    {
        printf("BONUS: Free Garlic Bread included!\n");
    }

    printf("========================================\n");
    printf("FINAL TOTAL: $%.2f\n", total);
    printf("========================================\n");
    printf("Thank you for dining with us!\n");
    printf("Have a slice-tastic day!\n");

    return 0;
}