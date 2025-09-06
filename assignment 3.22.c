#include <stdio.h>
int main()
{
 int i,c = 0;
 printf("Enter the number:");
 scanf("%d", &i);
 if(i == 0)
 {
  c = 1;
 }
 else
 {
  if(i < 0)
  {
   i = -i;
  }
  while(i > 0)
  {
   i /= 10;
   c++;
  }
 }//Count digits of the given numbers
 printf("Number of digits: %d\n", c);
 return 0;
}