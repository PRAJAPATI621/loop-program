#include <stdio.h>
int main() {
    int number, i, sum = 0;

    // Prompt user for input
    printf("Enter a number to check if it is a perfect number: ");
    scanf("%d", &number);
    // Calculate the sum of proper divisors
    for (i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i; // Add 'i' to sum if it's a divisor
        }
}
    // Check if the sum of divisors equals the number
    if (sum == number) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }
 return 0;
}
