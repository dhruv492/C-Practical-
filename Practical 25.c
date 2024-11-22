//In this Practical we are going to Create a Union called library to hold accession number, title of the book, author name,price of the book and flag indicating whether the book is issued or not.

#include<stdio.h>


union book
{
    int num;
    char title[50];
    char name[50];
    int price;
    int flag;
}b;
void main()
{
    printf("Enter library accession number :");
    scanf("%d",&b.num);
    printf("\nLibrary accession number is : %d.\n",b.num);

    printf("Enter title of the book :");
    fflush(stdin);
    gets(b.title);
    printf("\nTitle of the book is : %s.\n",b.title);
    printf("Enter book Author Name :");
    fflush(stdin);
    gets(b.name);
    printf("\nBook Author Name is :%s.\n",b.name);
    printf("Enter the price of the book :");
    scanf("%d",&b.price);
    printf("\nThe price of the book : %d.\n",b.price);
    printf("Enter flag of the book ( enter 0 for not issued and enter 1 for book is issued ): ");
    scanf("%d",&b.flag);
    if(b.flag==1)
        printf("Your Book Is Issued .\n");
    else
        printf("Your Book is not Issued .\n");
}
