#include <stdio.h>

#define MAX_STUDENTS 100

struct Student {
    char name[50];
    int marks;
};

void sortStudents(struct Student students[], int count) {
    int i, j;
    struct Student temp;

    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (students[j].marks > students[i].marks) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int count, i;

    printf("Enter the number of students: ");
    scanf("%d", &count);

    // Input student details
    for (i = 0; i < count; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    sortStudents(students, count);

    // Display the sorted students
    printf("\nSorted Students (Descending Order):\n");
    for (i = 0; i < count; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %d\n", students[i].marks);
        printf("\n");
    }

    return 0;
}
