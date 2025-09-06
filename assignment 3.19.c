#include <stdio.h>
int main()
{
 int i;
 for(i = 1; i <=100; i++)
 {
  //Check the cuurrent number is divisible by 5
  if(i % 5 == 0)
  { //Print the final numbers
     printf("The numbers are divisible by 5in the range of 1 to 100 is: %d\n", i);
  }
 }
 return 0;
}