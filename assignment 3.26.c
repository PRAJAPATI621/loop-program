#include <stdio.h>
#include <math.h>
int main()
{
 int i,reminder,original_i,result = 0,n  = 0;
 printf("Enter the number:");
 scanf("%d", &i);
 while(original_i != 0)
 {
  original_i /= 10;
  n++;
 }
 original_i = i;
 while(original_i != 0)
 {
  reminder = original_i % 10;
  result += pow(reminder,n);
 }
 if(result == i)
 {
  printf("%d is an armstrong number.\n", i);
 }
 else
 {
  printf("%d is not an armstrong number.\n", i);
 }
 return 0;
}