//In this Practical we are going to create a system for managing sports teams in CHARUSAT..

#include<stdio.h>
#include<string.h>

void display();
struct coach
{
    int age;
    int exp;
}c;
struct team
{
    char tname[20];
    char name[20];
    char type[20];
    struct coach c;
}t;

struct team t;
void main()
{
    printf("Enter Team Name:");
    gets(t.tname);
    printf("Enter Sporttype(e.g.basketball,football):");
    gets(t.type);
    printf("Enter team coach name:");
    gets(t.name);
    printf("Enter Coach Age :");
    scanf("%d",&t.c.age);
    gets(t.c.exp);
    printf("Enter Coach experience :");
    scanf("%d",&t.c.exp);

    display();

}
void display()
{
        printf("The Team name is : %s.\n",t.tname);
        printf("The Team type is : %s.\n",t.type);
        printf("The Coach name is : %s.\n",t.name);
        printf("The coach age is : %d.\n",t.c.age);
        printf("The coach experience is %d.\n",t.c.exp);
}




