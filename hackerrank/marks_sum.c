#include <stdio.h>
#include <stdlib.h>

int marks_summation(int *marks, int no, char gen)
{
    int sum = 0;

    if (gen == 'b')
    {
        for (int i = 0; i < no; i = i + 2)
        {
            sum = sum + *(marks + i);
        }
    }
    else
    {
        for (int i = 1; i < no; i = i + 2)
        {
            sum = sum + *(marks + i);
        }
    }

    return sum;
}

int main()
{

    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *)malloc(number_of_students * sizeof(int));

    for (int student = 0; student < number_of_students; student++)
    {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}