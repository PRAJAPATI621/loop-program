#include <stdio.h>
#include <math.h>
int main() {
    int num, i, isPrime = 1; // isPrime is a flag: 1 for prime, 0 for not prime

    printf("Enter a positive integer: ");
        scanf("%d", &num);

    // Handle special cases: 0, 1, and negative numbers
    if (num <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        // Check for divisibility from 2 up to the square root of num
        // An optimized approach as factors always appear in pairs
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Found a divisor, so it's not prime
                break;       // Exit the loop as soon as a divisor is found
            }
        }
    }

    if (isPrime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

 return 0;
}
