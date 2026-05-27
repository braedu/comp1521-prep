#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

void printStudent(struct Student s);
struct Student topStudent(struct Student students[], int size);

int main(void) {
    struct Student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Please enter student %d's details\n", i + 1);
    
        printf("Student's name: ");
        scanf("%s", students[i].name);
        printf("Student's age: ");
        scanf("%d", &students[i].age);
        printf("Student's grade: ");
        scanf("%f", &students[i].grade);
    }

    struct Student temp = topStudent(students, 3);
    printStudent(temp);    

    return 0;
}

void printStudent(struct Student s) {

    printf("The top student's name is %s\n", s.name);
    printf("The top student's age is %d\n", s.age);
    printf("The top student's grade is %f\n", s.grade);

}

struct Student topStudent(struct Student students[], int size) {
    int temp = 0;

    for (int i = 0; i < size - 1; i++ ) {
            if (students[i].grade > students[i + 1].grade) {
                temp = i;
            } else {
                temp = i + 1;
            }
    }
    for (int j = 1; j < size; j++) {
        if (students[temp].grade < students[0].grade) {
            temp = 0;
        }
    }
    return students[temp];
}