//In This Practical We are going to generate a multiplication table..

#include<stdio.h>
void main()
{
    int r,c,i,j,a;
    printf("Enter  the size of table vertically:");
    scanf("%d",&c);
    printf("Enter  the size of table horizontally:");
    scanf("%d",&r);
    printf("\n");
    printf("Multiplication Table (");
    printf("%dX%d):",r,c);
    printf("\n");

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            a=i*j;
            printf("%5d  ",a);
        }
        printf("\n");
    }
}
