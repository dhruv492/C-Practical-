//In This Practical We are going to create appropriate nested loops to draw some patterns:

#include <stdio.h>

void main()
{
    int r;     //r=row
    printf("Enter Number of Rows:");
    scanf("%d",&r);


    for (int i = 1;i <= r;i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j % 2);
        }
        printf("\n");
    }
}

