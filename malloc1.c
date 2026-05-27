#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num = 0;

    printf("How many numbers do you wish to enter?\n");
    scanf("%d", &num);

    int *array = malloc(num * sizeof(int));

    for (int i = 0; i < num; i++) {
        printf("Enter the number for position %d\n", i + 1);
        scanf("%d", &array[i]);

    }

    for (int i = 0; i < num; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}