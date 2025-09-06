#include <stdio.h>
int main()
{
 int i,reversed_i = 0,original_i,reminder;
 printf("Enter the number:");
 scanf("%d", &i);
 original_i = i;
 while(i != 0)
 {
  reminder = i % 10;
  reversed_i = reversed_i * 10 + reminder;
 i /=10; 
 }
 if(original_i == reversed_i)
 {
  printf("%d is palindrome number.\n", original_i);
 }
 else
 {
  printf("%d is not polindrome number.\n", original_i);
 }
 return 0;
}