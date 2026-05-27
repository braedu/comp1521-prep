#include <stdio.h>
#include <string.h>

struct Student {
        char name[50];
        int age;
        float grade;
    };

int main(void) {
    struct Student student1;
    strcpy(student1.name, "Steven");
    student1.age = 30;
    student1.grade = 7.0;

    printf("The student's name is %s\n", student1.name);
    printf("The student's age is %d\n", student1.age);
    printf("The student's grade is %.2f\n", student1.grade);

    return 0;
}