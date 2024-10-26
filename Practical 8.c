//In this Practical we are going to create a food ordering system ..

#include <stdio.h>
void main()
{
    int a;     //a=Item Name
    int total = 0;

    printf("Here is the Menu:\n");
    printf("1. Burger - 150\n");
    printf("2. Pizza - 200\n");
    printf("3. Pasta - 120\n");
    printf("4. Sandwich - 100\n");
    printf("5. French Fries - 80\n");
    printf("Enter 0 to finish your order.\n");

    for(a;a != 0;)
    {
        printf("\n\n\nSelect an item by entering its number: ");
        scanf("%d", &a);

        switch (a)
        {
            case 1:
                total += 150;
                printf("You ordered a Burger. Total = %d\n", total);
                break;
            case 2:
                total += 200;
                printf("You ordered a Pizza. Total = %d\n", total);
                break;
            case 3:
                total += 120;
                printf("You ordered a Pasta. Total = %d\n", total);
                break;
            case 4:
                total += 100;
                printf("You ordered a Sandwich. Total = %d\n", total);
                break;
            case 5:
                total += 80;
                printf("You ordered French Fries. Total = %d\n", total);
                break;
            case 0:
                printf("Order completed.\n");
                break;
            default:
                printf("Invalid Selection, Please try again.\n");
        }
    }

    printf("Your total bill is %d", total);
}
