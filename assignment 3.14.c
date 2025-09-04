#include <stdio.h>
int main()
{
 int i;
 float num;
 float sum = 0;
 float mean;
 printf("Enter 10 numbers:\n"); //The user to enter numbers
 for(i = 1; i <= 10; i++)
 {
  printf("Enter number %d:", i);
  scanf("%f", &num);
  sum += num; // Add the number to the sum
 }
 mean = sum / 10; // Calculate the mean
 //print the final sum
 printf("Sum of the entered number: %f\n", sum);
 printf("Mean of the entered numbers: %f\n", mean);// print the final mean
     return 0;
}
