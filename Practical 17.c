//In This Practical We are going to create the seating arrangement in theater.

#include <stdio.h>

void main()
{
    int seatingChart[40][40];
    int numRows, numCols;
    int reservedSeats;
    int row, col;

    printf("Enter number of rows: ");
    scanf("%d", &numRows);

    printf("Enter number of columns: ");
    scanf("%d", &numCols);

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            seatingChart[i][j] = 0;
            printf("%d ", seatingChart[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter number of seats to be reserved: ");
    scanf("%d", &reservedSeats);

    for (int i = 1; i <= reservedSeats; i++)
    {
        printf("\nEnter row number to change: ");
        scanf("%d", &row);
        printf("\nEnter column number to change: ");
        scanf("%d", &col);
        seatingChart[row][col] = 1;
    }
    printf("\nSeating Arrangement:\n");
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            printf("%.2d  ", seatingChart[i][j]);
        }
        printf("\n");
    }
}

