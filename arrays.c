#include <stdio.h>

int findMax(int array[], int size);
int findMin(int array[], int size);

int main(void) {
int array[10];

for (int i = 0; i < 10; i++) {
    printf("Enter your number: ");
    scanf("%d", &array[i]);
}

int maximum = findMax(array, 10);
printf("The maximum is %d\n", maximum);

int minimum = findMin(array, 10);
printf("The minimum is %d\n", minimum);

return 0;
}

int findMax(int array[], int size) {
int max = array[0];


for (int i = 1; i < size; i++) {
    if (array[i] > max) {
        max = array[i];
    }
}

return max;
}

int findMin(int array[], int size) {
int min = array[0];

for (int i = 1; i < size; i++) {
    if (array[i] < min) {
        min = array[i];
    }
}
return min;
}