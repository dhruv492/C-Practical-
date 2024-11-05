//In This Practical We are going to make a countdown timer..

#include<stdio.h>
void main()
{
    int i;      //a=given seconds

    printf("Enter a positive number for countdown:");
    scanf("%d",&i);

    for(i;i>=0;i--)
    {
        printf("%d seconds\n",i);
    }
    printf("\nCountdown Completed!");
}

