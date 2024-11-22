//In This Practical We are going to create appropriate nested loops to draw some patterns:

#include <stdio.h>

void main()
{
    int r;     //r=number of rows
    printf("Enter Number:");
    scanf("%d",&r);

    int i, j;

    for (i = 1;i <=r;i++)
    {

        for (j = r - 1; j >= i; j--)
        {
            printf(" ");
        }


        for (j = 1; j <= i; j++)
        {
            printf("%d", j );
        }

        printf("\n\n");
    }
}

