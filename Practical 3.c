// In This Practical We are going to calculate the simple interest on savings accounts.

#include<stdio.h>
#include<math.h>
void main()
{
    int tp;
    double pa;
    float ri,si;     //pa=principle amount,ri=rate of interest,tp=time period,si=simple interest

    pa=50000;
    ri=5.5;
    tp=3;

    si=(pa*ri*tp)/100;
    printf("Simple interest of Savings Accounts:%f",si);
}
