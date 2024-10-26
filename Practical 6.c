//In This Practical We are going to Create A Simple Calculator that Performs basic Arithmetic Operations.

#include <stdio.h>
void main()
{
    char o;
    float X,Y,Z;     //o=Operator,X=First Digit,Y=Second Digit,Z=Answer Variable.

    printf("Enter an operator (+, -, *, /):");
    scanf("%c",&o);

    printf("Enter two Digits:");
    scanf("%f\n%f",&X,&Y);

    switch (o)
    {
        case '+':
        {
            Z=X+Y;
            printf("Answer Is:%f",Z);
            break;
        }
        case '-':
        {
            Z=X-Y;
            printf("Answer Is:%f",Z);
            break;
        }
        case '*':
        {
            Z=X*Y;
            printf("Answer Is:%f",Z);
            break;
        }
        case '/':
        {
            if (Y != 0.0)
            {
                Z=X/Y;
                printf("Answer Is:%f",Z);
            }
            else
                printf("Please Enter A Valid Digit.");
            break;
        }
        default:
            printf("Please Enter A Valid Operator.");
    }
}
