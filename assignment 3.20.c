#include <stdio.h>
int main()
{
 int i;
 int sum = 0;
 for(i = 1; i <=100; i++)
 {
  //Check if the cuurrent number is divisible by 3
  if(i % 3 == 0)
  { 
   sum += i; //Add the number to the sum  
  }
  //Print the final sum
  printf("The sum of all numbers is divisible by 3 in the range of 1 to 100 is: %d\n", sum);
 }
 return 0;
}