//In this Practical We are going to create a structure of book detail and display details of the book.

#include<stdio.h>
#include<string.h>
void display(char a[], char b[],float);
struct student
{
    char title[20];
    char name[20];
    float amount;
}s1;

void main()
{
    strcpy(s1.title,"Atomic Habits");
    strcpy(s1.name,"James Clear");
    s1.amount=1000;
    display(s1.title,s1.name,s1.amount);
}
void display(char a[],char b[],float c)
{
        printf("The title of the book is : %s.\n",a);
        printf("The book Author name is : %s.\n",b);
        printf("The amount of the book is : %.2f\n ",c);
}


