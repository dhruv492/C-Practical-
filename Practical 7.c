////In This Practical We are going to See that Who Has More Wealth.

#include<stdio.h>
void main()
{
    int X,Y,X1,X2,X3,Y1,Y2,Y3;
    //X=Total Wealth of Raman,X1=Bungalow of Raman,X2=Plot of Raman,X3=Car of Raman.
    //Y=Total Wealth of Suman,Y1=Apartment of Suman,Y2=Hotel of Suman,Y3=Car of Suman.
    X1=12000000;
    X2=6000000;
    X3=3000000;
    Y1=11000000;
    Y2=8000000;
    Y3=8000000;

    X=X1+X2+X3;
    Y=Y1+Y2+Y3;

    if(X<Y)
        printf("Suman Possesses The Greater Total Wealth than Raman.");
    else if(X>Y)
        printf("Raman Possesses The Greater Total Wealth than Suman.");

    else
        printf("Raman and Suman Are Equally Wealthier..");
}
