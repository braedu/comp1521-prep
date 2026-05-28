#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *array = malloc(sizeof(int));
    int i = 0;
    int count = 1;
    int temp = 0;

    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Keep entering a number until you want to stop, then type -1: \n");
    while (i >= 0) {
        scanf("%d", &temp);

        if (temp == -1) {
            i = -1;
        } else {
            array[i] = temp;
            i++;
        }

        array = realloc(array, count * sizeof(int));
        
        if (array == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        count++;
    
    }

    for (int i = 0; i < count - 2; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
    free(array);

    return 0;
}