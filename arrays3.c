#include <stdio.h>

int bubbleSort(int array[], int size);

int main(void) {
    int array[10];

    for (int i = 0; i < 10; i++) {
        printf("Enter your number: ");
        scanf("%d", &array[i]);
    }

    bubbleSort(array, 10);
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

void bubbleSort(int array[], int size) {
    int temp;

    for (int j = 0; j < size; j++) {
        for (int i = 0; i < size; i++) {
            if (array[i] > array[i + 1]) {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}