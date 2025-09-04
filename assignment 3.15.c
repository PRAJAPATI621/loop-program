#include <stdio.h>
int main()
{
 int i,n;
 float num;
 float sum;
 float mean;
 for(i = 1; i <= n; i++) // the positive number not 0.000000000
 {
  printf("Take any n numbers: %f\n", num); //The computer take different numbers in his own
  scanf("%f", &num);
  sum += num; // Add the number to the sum
 }
 mean = sum / n; // Calculate the mean
 //print the final sum
 printf("Sum of the entered number: %f\n", sum);
 printf("Mean of the entered numbers: %f\n", mean);// print the final mean
     return 0;
}
