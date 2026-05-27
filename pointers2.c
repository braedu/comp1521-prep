#include <stdio.h>

int main(void) {
    int array[5] = {1, 2, 3, 4, 5};
    int *p = array;
    int sum = 0;

    for (int i = 0; i < 5; i++) {
    printf("%d\n", *(p + i));
    }

    for (int i = 0; i < 5; i++) {
        sum += *(p + i);
    }
    printf("%d\n", sum);

    return 0;
}