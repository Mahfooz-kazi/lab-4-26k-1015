#include <stdio.h>

int main()
{
    float total;
    char student;

    printf("Enter bill total: ");
    scanf("%f", &total);

    printf("Do you have a student ID? (Y/N): ");
    scanf(" %c", &student);

    if (student == 'Y' || student == 'y')
    {
        total = total - 2.00;
    }
    else if (student == 'N' || student == 'n')
    {
        total = total;
    }
    else
    {
        printf("Invalid choice.");
        return 0;
    }

    if (total < 0)
    {
        total = 0;
    }

    printf("Final bill: $%.2f", total);

    return 0;
}