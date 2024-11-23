//In this Practical we are going to swap two amounts of a bank..

#include<stdio.h>
void ptr(int *,int *);
void main()
{
    int a,b;
    printf("Enter the first amount =");
    scanf("%d",&a);
    printf("\nEnter the second amount=");
    scanf("%d",&b);
    ptr(&a,&b);
}

void ptr(int*p,int*q)
{
    int temp=*p;
    *p = *q;
    *q = temp;

    printf("First amount is %d",*p);
    printf("\nSecond amout is %d",*q);
}

