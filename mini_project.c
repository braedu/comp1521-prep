#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

void printAll(struct Student s[], int size);
struct Student topStudent(struct Student s[], int size);
float averageGrade(struct Student s[], int size);

int main(void) {
    int num_of_students;

    printf("Please enter how many students you want to add: \n");
    scanf("%d", &num_of_students);

    struct Student *students = malloc(num_of_students * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < num_of_students; i++) {
        printf("Please enter student %d's details\n", i + 1);
        scanf("%s", students[i].name);
        printf("Please enter student %d's age\n", i + 1);
        scanf("%d", &students[i].age);
        printf("Please enter student %d's grade\n", i + 1);
        scanf("%f", &students[i].grade);
    }


    printAll(students, num_of_students);
    struct Student top = topStudent(students, num_of_students);
    printf("The top student's name is %s. They are %d years old with a grade of %.2f\n", top.name, top.age, top.grade);
    float average = averageGrade(students, num_of_students);
    printf("The average grade amongst all students is %.2f\n", average);

    free(students);

    return 0;
}

void printAll(struct Student s[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d's name is %s. They are %d years old and has a grade of %.2f\n", i + 1, s[i].name, s[i].age, s[i].grade);
    }
}

struct Student topStudent(struct Student s[], int size) {
    float temp = s[0].grade;
    int temp2 = 0;

    for (int i = 0; i < size; i++) {
        if (temp < s[i].grade) {
            temp = s[i].grade;
            temp2 = i;
        }
    }
    return s[temp2];

}

float averageGrade(struct Student s[], int size) {
    float average = 0.0;
    
    for (int i = 0; i < size; i++) {
        average += s[i].grade;
    }
    average = average / (float)size;
    return average;
}