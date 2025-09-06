#include <stdio.h>
int main()
{
 int i;
 int reversed_i;
 printf("Enter the number:");
 scanf("%d", &i);
  while(i != 0)
  {
   reversed_i = reversed_i * 10 + reversed_i % 10;
   i = i /10;
  }
   printf("Reversed number: %d\n", reversed_i);
 return 0;
}