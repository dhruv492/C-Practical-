//In This Practical We are going to Create a simple student grading system.

#include <stdio.h>

void welcome_message();
int collect_number_of_students();
void collect_grades(int num_students);
float calculate_average(float grades[], int num_students);

int main()
{
    welcome_message();

    int num_students = collect_number_of_students();
    collect_grades(num_students);

    return 0;
}

void welcome_message()
{
    printf("Welcome to CHARUSAT!\n");
}

int collect_number_of_students()
{
    int num_students;
    do
    {
        printf("Enter the number of students: ");
        scanf("%d", &num_students);
        if (num_students <= 0)
        {
            printf("Please enter a positive integer.\n");
        }
    } while (num_students <= 0);

    return num_students;
}

void collect_grades(int num_students)
{
    float grades[num_students];

    for (int i = 0; i < num_students; i++)
    {
        do
        {
            printf("Enter the grade for student %d (0-100): ", i + 1);
            scanf("%f", &grades[i]);
            if (grades[i] < 0 || grades[i] > 100)
            {
                printf("Grade must be between 0 and 100.\n");
            }
        } while (grades[i] < 0 || grades[i] > 100);
    }

    float average_grade = calculate_average(grades, num_students);
    printf("The average grade of the students is: %.2f\n", average_grade);
}

float calculate_average(float grades[], int num_students)
{
    float sum = 0.0;

    for (int i = 0; i < num_students; i++)
    {
        sum += grades[i];
    }
    printf("\n");
    return sum / num_students;
}
