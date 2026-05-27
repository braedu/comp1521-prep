#include <stdio.h>

void swap(int *a, int *b);

int main(void) {
    int x = 5;
    int y = 10;
    int *a = &x;
    int *b = &y;

    printf("The two values unswapped are %d and %d\n", *a, *b);
    swap(a, b);
    printf("The two values swapped are %d and %d\n", *a, *b);

    return 0;
}

void swap(int *a, int *b) {
    int temp1;

    temp1 = *b;
    *b = *a;
    *a = temp1;

}