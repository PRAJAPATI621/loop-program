#include <stdio.h>
// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // If divisible by any number other than 1 and itself, it's not prime
        }
    }
    return 1; // If no divisors found, it's prime
}
int main() {
    printf("Prime numbers between 1 and 500 are:\n");
    for (int i = 1; i <= 500; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
 return 0;
}
