//In this Practical we are going to build a simple student marks recording system..

#include<stdio.h>
void main()
{
    FILE *F1;
    int number,i;
    printf("cobnters of marks file\n");
    F1=fopen("marks","w");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&number);
        putw(number,F1);
    }
    fclose(F1);
    F1=fopen("marks","r");
    printf("\n Display the marks\n");
    while((number=getw(F1))!= EOF)
    printf("%d ",number);
    fclose(F1);
}
