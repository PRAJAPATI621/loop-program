#include <stdio.h>
int main()
{
 int i,digit;
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
  }
 }
 return 0;
}