//In this Practical We are going to Create a grading system using ternary operator..
#include <stdio.h>

void main()
{
    int a;     //a=Marks of Students
    char *grade;

    printf("Enter the marks of students:");
    scanf("%d", &a);

    if (a < 0 || a > 100)
    {
        printf("Please,Enter The Valid Marks..");
    }
    else
    {
        *grade = (a >= 90) ? "A" :
                (a >= 80) ? "B" :
                (a >= 70) ? "C" :
                (a >= 60) ? "D" : "F";

        printf("The grade is:%s\n", grade);
    }
}
