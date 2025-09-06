#include <stdio.h>
int main()
{
 int num,i;
 printf("Enter the positive number:");
 scanf("%d", &num);
 printf("Factors of %d are: ", num);
 // Loop from 1 up to the number itself
 for (int i = 1; i <= num; i++) 
 {
 // Check if 'i' divides 'num' evenly
 if (num % i == 0)
 {
 printf("%d ", i); // If it does, 'i' is a factor, so print it
 }
 }
 printf("\n"); // Print a newline for better formatting
 return 0;
}
