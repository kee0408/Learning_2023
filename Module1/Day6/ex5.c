#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    char name[50];
    int marks;
};

void searchStudentsByName(struct Student students[], int count, const char* searchName) {
    int i;
    int found = 0;

    for (i = 0; i < count; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Student found:\n");
            printf("Name: %s\n", students[i].name);
            printf("Marks: %d\n", students[i].marks);
            printf("\n");

            found = 1;
        }
    }

    if (!found) {
        printf("Student with name '%s' not found.\n\n", searchName);
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int count, i;
    char searchName[50];

    printf("Enter the number of students: ");
    scanf("%d", &count);

    // Input student details
    for (i = 0; i < count; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    printf("\nEnter the name of the student to search: ");
    scanf("%s", searchName);

    searchStudentsByName(students, count, searchName);

    return 0;
}
