#include <stdio.h>
#include <stdlib.h>
typedef struct 
{

    int id;
    char name[20];
    float mark;

} Student;

int main() 
{

    int numStudents;

    printf("Enter the number of students: ");

    scanf("%d", &numStudents);

    Student *students = (Student *)malloc(numStudents * sizeof(Student));

    if (students == NULL) {

        printf("Memory allocation failed\n");

        return 1;

    }

    for (int i = 0; i < numStudents; i++) {

        printf("Enter details for student %d:\n", i + 1);

 

        printf("ID: ");

        scanf("%d", &(students[i].id));

 

        printf("Name: ");

        scanf("%s", students[i].name);

 

        printf("Marks: ");

        scanf("%f", &(students[i].mark));

 

        printf("\n");

    }

    printf("Data for %d students:\n", numStudents);

    for (int i = 0; i < numStudents; i++) {

        printf("Student %d: ID=%d, Name=%s, Marks=%.2f\n", i + 1, students[i].id, students[i].name, students[i].mark);

    }

    free(students);

    return 0;

}

 

 

