#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main(void) {
    struct Student students[3];

    printf("Enter the details for student\n");

    for (int j = 0; j < 3; j++) {
        printf("Student %d's name\n", j + 1);
        scanf("%s", students[j].name);
        printf("Student %d's age\n", j + 1);
        scanf("%d", &students[j].age);
        printf("Student %d's grade\n", j + 1);
        scanf("%f", &students[j].grade);
    }

    for (int i = 0; i < 3; i++) {
        printf("Student %d's name is %s\n", i + 1, students[i].name);
        printf("Student %d's age is %d\n", i + 1, students[i].age);
        printf("Student %d's grade is %.2f\n", i + 1, students[i].grade);
    }

    return 0;
}