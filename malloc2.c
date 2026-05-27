#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main(void) {
    int num2 = 0;

    printf("How many students do you wish to enter?\n");
    scanf("%d", &num2);

    struct Student *students = malloc(num2 * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < num2; i++) {
        printf("Please enter the details for student %d\n", i + 1);
        printf("Please enter the student's name: ");
        scanf("%s", students[i].name);
        printf("Please enter the student's age: ");
        scanf("%d", &students[i].age);
        printf("Please enter the student's grade: ");
        scanf("%f", &students[i].grade);
    }

    for (int i = 0; i < num2; i++) {
        printf("Student's %d name is %s. They are %d years old and has a grade of %.2f.\n", i + 1, students[i].name, students[i].age, students[i].grade); 
    }

    free(students);
    return 0;
}