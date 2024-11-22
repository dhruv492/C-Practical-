//In this Practical We are going to calculate area of triangles..

#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Enter size of first side of triangle:");
    scanf("%d", &a);
    printf("Enter size of second side of triangle:");
    scanf("%d", &b);
    printf("Enter size of third side of triangle:");
    scanf("%d", &c);
    check(a,b,c);
}
void check(int a, int b, int c)
{
    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        printf("Lengths are suitable for triangle.\n");
    }     else
    {
        printf("Lengths are not suitable for triangle.\n");
    }
    area(a, b, c);
}
int area(int a, int b, int c)
{
    int s,p;
    s = (a + b + c) / 2;
    p = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of the triangle is %d\n", p);
    return p;
}

