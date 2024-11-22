//In this Practical We are going to create a program that predicts how something grows over time,like how much money you might save each month..

#include<stdio.h>
#include<math.h>

int part1(int,int);

void main( )
{
    int money,month,save;

    printf("How much money you might save each month :");
    scanf("%d",&money);
    printf("Enter how much month you should calculate :");
    scanf("%d",&month);
    save=part1(money,month);
    printf("Your saving is : %d rupees\n",save);
}
int part1(int m,int n)
{
    if(n==1||n==0)
    {
        return m;
    }
    else
    {
        return (part1(m,n-1)+part1(m,n-2));
    }
}


