//In This Practical We are going to Calculate perimeter and area of rectangular plot of land.

#include<stdio.h>
void main()
{
    int l,b,p,a;      //l=length,b=breadth,p=perimeter,a=area
    l=50;
    b=30;

    p=2*(l+b);
    a=l*b;
    printf("The Perimeter of Rectangle is:%d\n",p);
    printf("The Area of Rectangle is:%d",a);
}
