#include <stdio.h>

int isPrime(int n);

int main(void) {
    int num;

    printf("Enter your number: ");
    scanf("%d", &num);

    if (num >= 2) {
        // Checking and printing all primes up until "num"
        for (int i = 2; i <= num; i++) {
            if (isPrime(i)) {
                printf("%d is prime!\n", i);
            }
        }

    } else if (num < 2) {
        printf("Please only consider positive numbers greater than zero\n");
        scanf("%d", &num);
    }

    return 0;
}


int isPrime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}