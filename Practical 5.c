//In This Practical We are going to Code A program thet will convert Temperature readings from celsius to fahrenheit.

#include<stdio.h>
void main()
{
    float f,c;     //f=fahrenheit,c=celsius.

    printf("Give Temperature Readings in Celsius:");
    scanf("%f",&c);
    f=((c*9)/5)+32;
    printf("Give Temperature Readings in Fahrenheit:%f",f);
}
