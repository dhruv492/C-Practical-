//In This Practical We are going to sort the prices of items in inventory to prepare a report.

#include <stdio.h>

void main()
{
    int prices[40],i, j, temp,itemCount;

    printf("Enter number of items:");
    scanf("%d", &itemCount);

    for (i = 0; i < itemCount; i++)
    {
        printf("Enter price of item %d:", i + 1);
        scanf("%d", &prices[i]);
    }

    for (i = 0; i < itemCount - 1; i++)
    {
        for (j = i + 1; j < itemCount; j++)
        {
            if (prices[i] > prices[j])
            {
                temp = prices[i];
                prices[i] = prices[j];
                prices[j] = temp;
            }
        }
    }

    printf("\nPrices in Ascending Order:\n");
    for (i = 0; i < itemCount; i++)
    {
        printf("%d\n", prices[i]);
    }
}

