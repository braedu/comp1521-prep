#include <stdio.h>

int main(void) {
    int array[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter your numbers: ");
        scanf("%d", &array[i]);
    }

    for (int i = 4; i >= 0; i--) {
        printf("%d\n", array[i]);
    }


    return 0;
}