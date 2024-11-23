//In this Practical we are going to Write a C program using a character string in a block of memory space created by calloc () and then modify the same to store a larger string using realloc () function.(Dynamic Array).

#include <stdio.h>
#define FILENAME "marks.txt"
int main()
{
    int choice;
    printf("Student Marks System\n");
    printf("1. Write Marks\n");
    printf("2. Read Marks\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        writeMarks();
    }
    else if (choice == 2)
    {
        readMarks();
    }
    else
    {
        printf("Invalid choice.\n");
    }
    return 0;
}
void writeMarks()
{
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL)
    {
        printf("Could not open the file for writing.\n");
        return;
    }
    int mark;
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    printf("Enter the marks for %d students:\n", num_students);
    for (int i = 0; i < num_students; i++)
    {
        printf("Student %d mark: ", i + 1);
        scanf("%d", &mark);
        putw(mark, file);
    }
    fclose(file);
    printf("Marks written to the file successfully.\n");
}
void readMarks()
{
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL)
    {
        printf("Could not open the file for reading.\n");
        return;
    }
    int mark;
    printf("Marks of students are:\n");
    while ((mark = getw(file)) != EOF)
    {
        printf("%d\n", mark);
    }
    fclose(file);
}
