#include <stdio.h>
int main()
{
 int i,digit,sum = 0;
 printf("Enter the number:");
 scanf("%d", &i);   
 printf("Digits of the number (from left to right):\n");
 if(i ==0)
 {
  printf("0\n");
 }
 else
 {
  while(i > 0)
  {
   digit = i % 10;
   printf("%d\n", digit);
   i = i / 10;
   sum += digit;
  }
 }
 //sum of all the digit
 printf("Sum of all the digits of given number: %d\n", sum);
 return 0;
}